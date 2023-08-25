#include "S2ETools.h"
#include <cstring>

namespace S2EInternals {

    enum S2E_CONCOLICSESSION_COMMANDS {
        START_CONCOLIC_SESSION,
        END_CONCOLIC_SESSION
    };

    struct S2E_CONCOLICSESSION_COMMAND {
        S2E_CONCOLICSESSION_COMMANDS Command;
        uint32_t max_time;
        uint8_t is_error_path;
        uint32_t result_ptr;
        uint32_t result_size;
    } __attribute__((packed));

    enum S2E_INTERPRETERMONITOR_COMMANDS {
        TraceUpdate
    };

    struct S2E_INTERPRETERMONITOR_COMMAND {
        // There is just one command - TraceUpdate.
        // In order to not break compatibility with
        // existing Chef code, this has to be left out.
        //S2E_INTERPRETERMONITOR_COMMANDS Command;
        //union {
        uint32_t op_code;
        uint32_t frame_count;
        uint32_t frames[2];
        uint32_t line;
        uint8_t function[61];
        uint8_t filename[61];
        //};
    } __attribute((packed));

    enum S2E_EXAMPLECOMMS_COMMANDS {
        COMMAND_1
    };

    struct S2E_EXAMPLECOMMS_COMMAND {
        S2E_EXAMPLECOMMS_COMMANDS Command;
        union {
            uint64_t param;
        };
    };
};

void StartSymbex() {
    s2e_message("Starting symbex");

    S2EInternals::S2E_CONCOLICSESSION_COMMAND cmd;
    cmd.Command = S2EInternals::S2E_CONCOLICSESSION_COMMANDS::START_CONCOLIC_SESSION;
    cmd.max_time = 300;

    s2e_invoke_plugin("ConcolicSession", &cmd, sizeof(cmd));
}

void EndSymbex(bool hit_error) {
    s2e_message("Ending symbex");

    S2EInternals::S2E_CONCOLICSESSION_COMMAND cmd;
    cmd.Command = S2EInternals::S2E_CONCOLICSESSION_COMMANDS::END_CONCOLIC_SESSION;
    cmd.is_error_path = hit_error;

    s2e_invoke_plugin("ConcolicSession", &cmd, sizeof(cmd));
}

void UpdateHighLevelInstruction(uint32_t opcode, antlr4::ParserRuleContext * ctx) {
    s2e_message("Updating HL trace");

    S2EInternals::S2E_INTERPRETERMONITOR_COMMAND cmd;
    cmd.op_code = opcode;
    strncpy((char *)cmd.filename, "<no support>", 60);
    strncpy((char *)cmd.function, "<no support>", 60);
    cmd.line = ctx->start->getLine();
    cmd.frame_count = 0;
    cmd.frames[0] = 0;
    cmd.frames[1] = 0;

    s2e_invoke_plugin("InterpreterMonitor", &cmd, sizeof(cmd));
}

void DebugMsg(std::string msg) {
    s2e_message(msg.c_str());

    S2EInternals::S2E_EXAMPLECOMMS_COMMAND cmd;
    cmd.Command = S2EInternals::S2E_EXAMPLECOMMS_COMMANDS::COMMAND_1;
    cmd.param = 42;

    s2e_invoke_plugin("ExampleComms", &cmd, sizeof(cmd));
}

void SymbolicVar(std::string variableName, void * buffer, int bufferSize) {
    s2e_message("Creating new variable");

    s2e_make_symbolic(buffer, bufferSize, variableName.c_str());
}

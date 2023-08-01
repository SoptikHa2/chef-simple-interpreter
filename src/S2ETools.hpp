#pragma once

#include <cstring>

namespace S2EInternals {

#include "../s2e/s2e.h"

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

};

void StartSymbex() {
    S2EInternals::S2E_CONCOLICSESSION_COMMAND cmd;
    cmd.Command = S2EInternals::S2E_CONCOLICSESSION_COMMANDS::START_CONCOLIC_SESSION;
    cmd.max_time = 300;

    S2EInternals::s2e_invoke_plugin("ConcolicSession", &cmd, sizeof(cmd));
}

void EndSymbex(bool hit_error) {
    S2EInternals::S2E_CONCOLICSESSION_COMMAND cmd;
    cmd.Command = S2EInternals::S2E_CONCOLICSESSION_COMMANDS::END_CONCOLIC_SESSION;
    cmd.is_error_path = hit_error;

    S2EInternals::s2e_invoke_plugin("ConcolicSession", &cmd, sizeof(cmd));
}

void UpdateHighLevelInstruction(uint32_t opcode, std::string filename, std::string functionName, uint32_t line, uint32_t frameCount, uint32_t frameFrom, uint32_t frameTo) {
    S2EInternals::S2E_INTERPRETERMONITOR_COMMAND cmd;
    cmd.op_code = opcode;
    strncpy((char *)cmd.filename, filename.c_str(), 60);
    strncpy((char *)cmd.function, functionName.c_str(), 60);
    cmd.line = line;
    cmd.frame_count = frameCount;
    cmd.frames[0] = frameFrom;
    cmd.frames[1] = frameTo;

    S2EInternals::s2e_invoke_plugin("InterpreterMonitor", &cmd, sizeof(cmd));
}
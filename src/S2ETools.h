#pragma once

#include "../s2e/s2e.h"
#include "../antlr4-runtime/ParserRuleContext.h"
#include "../antlr4-runtime/Token.h"
#include <string>


void StartSymbex();

void EndSymbex(bool hit_error);

void UpdateHighLevelInstruction(uint32_t opcode, antlr4::ParserRuleContext * ctx);

void DebugMsg(std::string msg = "Debug message");
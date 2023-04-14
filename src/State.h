#pragma once

#include <vector>
#include <unordered_map>
#include <string>
#include "gen/ŘParser.h"

struct Function {
    std::vector<std::string> params = {};
    ŘParser::BlockContext * body = nullptr;
};

struct State {
    std::unordered_map<std::string, int> variables;
    std::unordered_map<std::string, Function> functions;
};

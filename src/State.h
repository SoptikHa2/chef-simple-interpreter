#pragma once

#include <vector>
#include <unordered_map>
#include <string>
#include <optional>
#include "gen/RRParser.h"

struct Function {
    std::vector<std::string> params = {};
    RRParser::BlockContext * body = nullptr;
};

struct Runtime {
    std::optional<std::string> currently_defining_variable_name;
};

struct State {
    bool error_occurred = false;
    std::unordered_map<std::string, int> variables;
    std::unordered_map<std::string, Function> functions;
    Runtime runtime_details;
};

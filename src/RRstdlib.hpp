#pragma once

#include <iostream>
#include <functional>
#include <unordered_map>

namespace řstd {
    void printChar(int expr) {
        unsigned char c = (unsigned char)expr;
        std::cout << c;
    }

    void print(int expr) {
        std::cout << expr;
    }

    void println(int expr) {
        std::cout << expr << std::endl;
    }

    int readNum() {
        int n;
        std::cin >> n;
        if(!std::cin) throw std::runtime_error("Failure while reading a number");
        return n;
    }

    int readChar() {
        char c;
        std::cin >> c;
        if(!std::cin) throw std::runtime_error("Failure while reading a character");
        return (int)c;
    }

    std::unordered_map<std::string, std::function<void(int)>> _vifunc = {
            {"printChar", printChar},
            {"print", print},
            {"println", println},
    };
    std::unordered_map<std::string, std::function<int(void)>> _ivfunc = {
            {"readNum", readNum},
            {"readChar", readChar},
    };
}

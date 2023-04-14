#include <string>
#include <iostream>

#include "gen/ŘLexer.h"
#include "gen/ŘParser.h"

#include "Interpreter.h"

using namespace std;

// TODO: Load from file
std::string program = "foo <- fun () return <- 18; bar <- foo();";


int main() {
    // Convert the file into ANTLR's format.
    antlr4::ANTLRInputStream stream (program);

    // Give the input to the lexer.
    ŘLexer lexer(&stream);
    // Generate the tokens.
    antlr4::CommonTokenStream tokens(&lexer);

    tokens.fill();

    // Create the translation that will parse the input.
    ŘParser parser (&tokens);
    parser.setBuildParseTree(true);
    ŘParser::ProgContext *tree = parser.prog();

    Interpreter interpreter;
    interpreter.visitProg(tree);

    cout << interpreter << endl;
    return 0;
}

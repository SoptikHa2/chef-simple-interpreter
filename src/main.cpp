#include <string>
#include <iostream>
#include <cstdlib>
#include <cstring>

#include "gen/RRLexer.h"
#include "gen/RRParser.h"

#include "Interpreter.h"

using namespace std;

int main(int argc, char ** argv) {
    if (argc != 2) {
        cout << "Usage: ./chef_simple_interpreter <file>" << endl;
        return 1;
    }


    bool symbexec_enabled = false;
    if(strcmp(getenv("RR_SYMBEX"), "1") == 0)
        symbexec_enabled = true;


    ifstream input_stream((string(argv[1])));

    // Convert the file into ANTLR's format.
    antlr4::ANTLRInputStream stream (input_stream);

    // Give the input to the lexer.
    RRLexer lexer(&stream);
    // Generate the tokens.
    antlr4::CommonTokenStream tokens(&lexer);

    tokens.fill();

    // Create the translation that will parse the input.
    RRParser parser (&tokens);
    parser.setBuildParseTree(true);
    RRParser::ProgContext *tree = parser.prog();

    Interpreter interpreter(symbexec_enabled);
    interpreter.visitProg(tree);

    //cout << interpreter << endl;

    return 0;
}

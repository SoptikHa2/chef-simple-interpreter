grammar Ř;

prog: block
    ;

block:  '{' stmtlist '}'
    |   stmt
    ;

stmtlist:   stmt (';' stmtlist)* ';'?
    ;

stmt:   ID '<-' expr // variable assignment
    |   ID '<-' func // function definition
    |   'if' '(' cond=expr ')' body=block
    |   'if' '(' cond=expr ')' truebody=block 'else' falsebody=block
    |   'while' '(' expr ')' block
    |   expr
    ;

expr:   literal
    |   ID  // variable read
    |   fun=ID '(' args=arglist? ')' // function call
    |   left=expr op=('*'|'/') right=expr
    |   left=expr op=('+'|'-') right=expr
    |   left=expr op='==' right=expr
    |   left=expr op='>' right=expr
    |   left=expr op='<' right=expr
    |   '!' expr
    |   '(' expr ')'
    ;

arglist:    expr (',' arglist)*
    ;

// function definition
func:   'fun' '(' args=arglist? ')' block
    ;

literal:    INTLIT;

INTLIT: [0-9]+;

ID: [a-zA-Z_][a-zA-Z0-9_]*;

WS: [ \t\r\n] -> channel(HIDDEN);

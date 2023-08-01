grammar RR;

prog: stmtlist EOF
    ;

block:  '{' stmtlist '}'
    |   stmt
    ;

stmtlist:   stmt (';' stmtlist)* ';'?
    ;

stmt:   ID '<-' expr # VariableAssignment
    |   ID '<-' func # FunctionDefinition
    |   'if' cond=expr body=block # IfCondition
    |   'if' cond=expr truebody=block 'else' falsebody=block # IfElseCondition
    |   'while' cond=expr body=block # WhileLoop
    |   expr # Expression
    ;

expr:   literal # Lit
    |   ID  # VariableRead
    |   fun=ID '(' args=arglist? ')' # FunctionCall
    |   left=expr op=('*'|'/') right=expr # OpComputation
    |   left=expr op=('+'|'-') right=expr # OpComputation
    |   left=expr op=('=='|'>'|'<') right=expr # OpComparsion
    |   op=('!'|'-') e=expr # OpUnary
    |   '(' e=expr ')' # OpParens
    ;

arglist:    expr (',' arglist)*
    ;

// function definition
func:   'fun' '(' params=paramlist? ')' block
    ;

paramlist:  ID (',' paramlist)*
    ;

literal:    INTLIT;

INTLIT: [-]?[0-9]+;

ID: [a-zA-Z_][a-zA-Z0-9_]*;

WS: [ \t\r\n] -> channel(HIDDEN);


namespace Rules {
    enum Statement {
        VariableAssignment,
        FunctionDefinition,
        IfCondition,
        IfElseCondition,
        WhileLoop,
        Expression
    };

    enum Expression {
        Literal,
        VariableRead,
        FunctionCall,
        OpMulDiv,
        OpPlusMinus,
        OpEquality,
        OpGt,
        OpLt,
        OpNot,
        OpParens
    };
}
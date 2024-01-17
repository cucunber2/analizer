#pragma once

#include "syntax_rule.h"

struct SyntaxNode {
    // TODO: ���� �������� "SyntaxRule syntaxRule" �� "const SyntaxRule& syntaxRule" ������ bad_alloc
    SyntaxNode(SyntaxRule syntaxRule)
        : syntaxRule(syntaxRule)
    { };

    SyntaxRule syntaxRule;

    friend std::ostream& operator<<(std::ostream& s, const SyntaxNode& node)
    {
        s << "[rule]: " << node.syntaxRule << std::endl;
        return s;
    }
};

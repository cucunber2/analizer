#pragma once

#include "term_type.h"

namespace TermTypes {
    static const TermType UNDEFINED(0, "������������");
    static const TermType IDENTIFIER(1, "�������������");
    static const TermType NUMBER(2, "�������� �������");
    static const TermType ASSIGNMENT(3, "�������� ������������");
    static const TermType OPEN_BRACKET(4, "����������� ������");
    static const TermType CLOSE_BRACKET(5, "����������� ������");
    static const TermType PLUS(6, "�������� \"+\"");
    static const TermType SEMICOLON(7, "����� � �������");
    static const TermType COMMENT(8, "�����������");
    static const TermType KEYWORD(9, "�������� �����");
    static const TermType MINUS(10, "�������� \"-\"");
    static const TermType MULTIPLY(11, "�������� \"*\"");
    static const TermType DIVIDE(12, "�������� \"/\"");
    static const TermType OR(13, "�������� OR");
    static const TermType XOR(14, "�������� XOR");
    static const TermType AND(15, "�������� AND");
    static const TermType NOT(16, "�������� NOT");
    static const TermType IF(17, "�������� IF");
    static const TermType THEN(18, "�������� THEN");
    static const TermType ELSE(19, "�������� ELSE");
    static const TermType LIMIT(20, "����� ������");
    static const TermType FOR(21, "�������� FOR");
    static const TermType DO(22, "�������� DO");
    static const TermType LESS(23, "�������� <");
    static const TermType GREATER(24, "�������� >");
    static const TermType EQUAL(25, "�������� =");
    static const TermType TRUE(26, "������");
    static const TermType FALSE(27, "����");
    static const TermType BOOL(28, "���������� ���");
}

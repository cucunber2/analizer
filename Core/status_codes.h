#pragma once

#include "enum_struct.h"

#include <string>
#include <map>

typedef struct StatusCode : EnumStruct {    
    StatusCode(const int code, const std::string string)
        : EnumStruct(code, string)
    { }

    StatusCode(const int code)
        : EnumStruct(INSTANCES.at(code)._code, INSTANCES.at(code).toString())
    { }

    operator std::string() const {
        return toString();
    }

    bool operator==(const StatusCode& a) const {
        return a._code == this->_code;
    }

private:
    static const std::map<int, StatusCode> INSTANCES;
};

namespace StatusCodes {
    static const StatusCode SUCCESS__(0, "�������");
    static const StatusCode LEX_1(1, "����������� ������");
    static const StatusCode LEX_2(2, "������������ ������� ������");
    static const StatusCode LEX_3(3, "����������� ����� �����");
    static const StatusCode LEX_4(4, "�������� ������������� �����������");
    static const StatusCode LEX_5(5, "��������� ������������");
    static const StatusCode LEX_6(6, "������������ ������ ��������������");
    static const StatusCode LEX_7(7, "������������� �������� �������������");
    static const StatusCode LEX_8(8, "��������� ���������");
    static const StatusCode LEX_9(9, "�������� ��������");
    static const StatusCode LEX_10(10, "�������� �������������");

    static const StatusCode LEX_INVALID_INPUT_CHAR(51, "������������ ������� ������");
    static const StatusCode LEX_INVALID_OPERATOR(52, "����������� ��������");
    static const StatusCode LEX_INVALID_IDENTIFIER(53, "������������ ������ ��������������");
    static const StatusCode LEX_ENDLESS_COMMENT(54, "���������� �����������");

    static const StatusCode SYN_END_OF_STATEMENT(100, "������������� ����");
    static const StatusCode SYN_ERROR(101, "�������������� ������");
    static const StatusCode SYN_ASSIGNMENT_EXPECTED(102, "��������� ������������ (:=)");
    static const StatusCode SYN_OPEXP(103, "�������� �������� (*, /)"); // �������� 
    static const StatusCode SYN_UNCLOSED_BRACKET(104, "������ �� �������"); // ���������� ������
    static const StatusCode SYN_UEXPECTED_BRACKET(105, "����������� ������"); // ����������� ������
    static const StatusCode SYN_EXPR_EXPECT(106, "��������� ���������");
    static const StatusCode SEM_ASSIGNTOCONST(107, "������������ � ��������"); // ������������ � ��������
}
#pragma once
#include <iostream>
#include <string>
using namespace std;
struct complex_number {  //�������� ��������� ����������� �����
    double real;
    double imagine;
};
complex_number convert(string term) {
    complex_number x;
    x.real = 1;  //����� �� ������� ��������� ���������� ��� ����� �������� ��������� �������� �� 0, � 1
    x.imagine = 1;

    if (term[0] == '-') {  //���� ������� ������ �����, �� ������ �������� �������������� ����� �� -1;
        x.real *= -1;
        term.erase(term.begin(), term.begin() + 1);  //������� ����� �� ������� �������, ���� �� ����, ����� ���� ����� ����� ������ ����
    }
  
    int index = term.find('+');  //������� ������ �����, ���� ��� ����
    if (index == -1) {
        index = term.find('-');  //������� ������ �����, ���� ��� �����
        x.imagine = -1;  //������ �������� ������ ����� �� -1, ���� ������ ���� �����
    }   
    x.real *= atoi(&term.substr(0, index)[0]);  //������� �������������� �����
    x.imagine *= atoi(&term.substr(index + 1, term.size() - 2)[0]);  //������� ������ �����
   
    return x;  //���������� ���������� ����������� �����
}
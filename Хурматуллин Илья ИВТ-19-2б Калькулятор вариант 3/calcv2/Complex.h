#pragma once
#include <iostream>
#include <string>
using namespace std;
struct complex_number {  //создадим структуру комплексных чисел
    double real;
    double imagine;
};
complex_number convert(string term) {
    complex_number x;
    x.real = 1;  //чтобы не вводить отдельные переменные для знака присвоим начальное значение не 0, а 1
    x.imagine = 1;

    if (term[0] == '-') {  //если нулевой символ минус, то меняем значение действительной части на -1;
        x.real *= -1;
        term.erase(term.begin(), term.begin() + 1);  //удаляем минус на нулевой позиции, если он есть, чтобы было легче найти второй знак
    }
  
    int index = term.find('+');  //находим индекс знака, если это плюс
    if (index == -1) {
        index = term.find('-');  //находим индекс знака, если это минус
        x.imagine = -1;  //меняем значение мнимой части на -1, если второй знак минус
    }   
    x.real *= atoi(&term.substr(0, index)[0]);  //находим действительную часть
    x.imagine *= atoi(&term.substr(index + 1, term.size() - 2)[0]);  //находим мнимую часть
   
    return x;  //возвращаем полученное комплексное число
}
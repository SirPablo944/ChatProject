#pragma once
#include <iostream>
#include <string>
using namespace std;

class Message {
    string m_from;
    string m_to;
    string m_text;
public:

    Message() = default; // конструктор
    Message(const string& from, const string& to, const string& text); // конструктор
    ~Message() = default; // деструктор
    static Message messageCreator(); // метод для создания объектов класса для дальнейшего помещения в вектор
};
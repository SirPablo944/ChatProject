#pragma once
#include <iostream>
#include <string>
using namespace std;

class Message {
    string m_from;
    string m_to;
    string m_text;
public:

    Message() = default;
    Message(const string& from, const string& to, const string& text);
    ~Message() = default;
    static Message messageCreator();
};
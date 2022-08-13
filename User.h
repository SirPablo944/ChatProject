#pragma once
#include <iostream>
using namespace std;

class User {
	string m_name;
	string m_login;
	string m_password;
public:

	User() = default;
    User(const string& name, const string& login, const string& password);
	~User() = default;
    string& getName();
    string& getLogin();
    string& getPassword();
    void setName(const string& name);
    void setLogin(const string& login);
    void setPassword(const string& password);
    static User userCreator();

};
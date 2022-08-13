#pragma once
#include <iostream>
using namespace std;

class User {
	string m_name;
	string m_login;
	string m_password;
public:

	User() = default; // конструктор
    User(const string& name, const string& login, const string& password); // конструктор
	~User() = default; // деструктор
    string& getName(); // геттеры
    string& getLogin();
    string& getPassword();
    void setName(const string& name); // сеттеры
    void setLogin(const string& login);
    void setPassword(const string& password);
    static User userCreator(); // метод для создания объектов класса для дальнейшего помещения в вектор

};
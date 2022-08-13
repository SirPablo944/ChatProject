#include "User.h"
#include <iostream>
#include <string>
using namespace std;

User::User(const string& name, const string& login, const string& password) : m_name(name), m_login(login), m_password(password) {
    cout << "User " << m_name << " created successfully!\n";
}


string& User::getName() {
    return m_name;
}

string& User::getLogin() {
    return m_login;
}

string& User::getPassword() {
    return m_password;
}

void User::setName(const string& name) {
    m_name = name;
}

void User::setLogin(const string& login) {
    m_login = login;
}

void User::setPassword(const string& password) {
    m_password = password;
}

User User::userCreator() {
    string name;
    string login;
    string password;
    char userChoice = 0;

    while (true) {
        cout << "Press 'n' to register new User" << endl;
        cin >> userChoice;
        if (userChoice == 'n')
        {
            cout << "Enter User Name!" << endl;
            cin >> name;
            cout << "Enter Login!" << endl;
            cin >> login;
            cout << "Enter Password!" << endl;
            cin >> password;

            cout << "You entered:" << endl;
            cout << name << endl
                << login << endl
                << password << endl
                << "If everything is correct, press 'c', otherwise the system will start over." << endl;
            char userChoice2 = 0;
            cin >> userChoice2;
            if (userChoice2 == 'c')
                break;
        }
        else {
            cout << "Wrong input, try again!" << endl;
        }
    }
    User user(name, login, password);
    return user;
}
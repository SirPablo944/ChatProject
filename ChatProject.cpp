// ChatProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Message.h"
#include "User.h"
using namespace std;

template<typename T> T tempSum(T a, T b) {
    return a + b;
}

int main()
{
    cout << "Welcome to Pavel's Chat!!!" << endl;
    vector<User> users;
    users.push_back(User::userCreator());
    cout << "Enter Login and Password to log in!" << endl;
    
    while (true) {
        try {
            string login;
            string password;
            cin >> login;
            cin >> password;
            if (login == users.back().getLogin() && password == users.back().getPassword()) {
                cout << "Correct input! " << users.back().getName() << " you are now logged in.\n";
                break;
            }
            else {
                throw "User not found or wrong password!!! Try again!!!";
            }
        }
        catch (const char* exception) {
            cout << exception << endl;
        }
    }

    vector<Message> messages;
    int userChoice;

    do {
        cout << "Welcome to the main menu!!! Please enter:" << endl
            << "1 - to send a message" << endl
            << "2 - to change user name, login or password" << endl
            << "3 - to create a new user and login" << endl
            << "4 - to see all existing users" << endl
            << "5 - to open mini calculator (just to show that I can use template functions for additional score)" << endl
            << "6 - to exit the program" << endl;
        

        string newName;
        string newLogin;
        string newPassword;
        int a;
        int b;
        double c;
        double d;

        cin >> userChoice;
        switch (userChoice) {
        case 1:
            messages.push_back(Message::messageCreator());
            break;

        case 2:
            cout << "Enter new name" << endl;
            cin >> newName;
            users.back().setName(newName);
            cout << "Enter new login" << endl;
            cin >> newLogin;
            users.back().setLogin(newLogin);
            cout << "Enter new password" << endl;
            cin >> newPassword;
            users.back().setPassword(newPassword);
            break;

        case 3:
            users.push_back(User::userCreator());
            cout << "Enter Login and Password to log in!" << endl;

            while (true) {
                try {
                    string login;
                    string password;
                    cin >> login;
                    cin >> password;
                    if (login == users.back().getLogin() && password == users.back().getPassword()) {
                        cout << "Correct input! " << users.back().getName() << " you are now logged in.\n";
                        break;
                    }
                    else {
                        throw "User not found or wrong password!!! Try again!!!";
                    }
                }
                catch (const char* exception) {
                    cout << exception << endl;
                }
            }
            break;

        case 4:
            for (auto& u : users) {
                cout << "User login " << u.getLogin() << " User name " << u.getName() << endl;
            }
            break;

        case 5:
            cout << "Enter 2 integer numbers to sum up" << endl;
            cin >> a;
            cin >> b;
            cout << "Result: " << tempSum(a, b) << endl;
            cout << "Enter 2 double numbers to sum up" << endl;
            cin >> c;
            cin >> d;
            cout << "Result: " << tempSum(c, d) << endl;
            break;

        case 6:
            break;

        default:
            cout << "Wrong input, try again!" << endl;
        }
    } while (userChoice != 6);
    return 0;
}


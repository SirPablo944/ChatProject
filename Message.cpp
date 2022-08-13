#include "Message.h"
#include <iostream>
#include <string>
using namespace std;


Message::Message(const string& from, const string& to, const string& text) : m_from(from), m_to(to), m_text(text) {
    cout << "From: " << m_from << "\nTo: " << m_to << "\nText of the message: " << m_text << endl;
}

Message Message::messageCreator() {
    string from;
    string to = "Everyone";
    string text;
    char userChoice = 0;

    while (true) {
        cout << "Press 'e' to send message to everyone or 's' to send message to someone (particular)" << endl;
        cin >> userChoice;
        if (userChoice == 'e')
        {
            cout << "Enter from!" << endl;
            cin >> from;
            cout << "Enter text!" << endl;
            cin.ignore(32767, '\n');
            getline(cin, text);
            break;
        }
        else if (userChoice == 's') {
            cout << "Enter from whom the message will be sent!" << endl;
            cin >> from;
            cout << "Enter to whom the message will be sent!" << endl;
            cin >> to;
            cout << "Enter text of the message!" << endl;
            cin.ignore(32767, '\n');
            getline(cin, text);
            break;
        }
        else {
            cout << "Wrong input, try again!" << endl;
        }
    }
    Message message(from, to, text);
    return message;
}
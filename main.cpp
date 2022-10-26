#include <iostream>
using namespace std;

int ReturnUser(){
    string login;
    string password;
    cout << "Enter login: " << endl;
    cin >> login;
    if (login == ""){
        return ReturnUser();
    }
    cout << "I need your password: " << endl;
    cin >> password;
    cout << "Checking info ..." << endl;
    if (login == "Arash"){
        if (password == "1234"){
            cout << "It works out!" << endl;
            return 0;
        }
    }
    cout << "Access Denied" << endl;
    return 0;
}

int main(){
    ReturnUser();
    string Pause;
    cout << "Type something bro ..." << endl;
    cin >> Pause;
    main();
}


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool Isloggedin() {
    string username, password, un, pw;

    cout << "Enter username :";
    cin >> username;

    cout << "Enter password :";
    cin >> password;

    ifstream read(""); // enter a path to a txt file here and also put double backslashes instead of one
    getline(read, un);
    getline(read, pw);

    if (un == username && pw == password) {
        return true;
    }
    else {
        return false;
    }

}

int main()
{
    int choice;

    cout << " 1: register \n 2:login\n choose: ";
    cin >> choice;
    if (choice == 1) {
        string username, password;

        cout << " select a username :";
        cin >> username;
        cout << " select a password :";
        cin >> password;

        ofstream file;
        file.open(""); // enter a path to a txt file here and also put double backslashes instead of one
        file << username << endl << password;
        file.close();

        main();
    }

    else if (choice == 2) {
        bool status = Isloggedin();

        if (!status) {
            cout << "wrong username or password: ";
            system("PAUSE");
            return 0;
        }

        else {
            cout << "login sucessfull ";
            system("PAUSE");
            return 1;
        }
    }
}
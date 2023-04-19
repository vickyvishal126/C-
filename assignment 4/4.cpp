#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

bool isValidUsername(string username) {
    if (username.length() < 6 || username.length() > 20)
        return false;
    if (!isalpha(username[0]))
        return false;
    for (int i = 1; i < username.length(); i++) {
        if (!isalnum(username[i]) && username[i] != '_')
            return false;
    }
    return true;
}

int main() {
    string username;

    cout << "Enter a username: ";
    cin >> username;

    if (isValidUsername(username))
        cout << "Valid username\n";
    else
        cout << "Invalid username\n";

    return 0;
}


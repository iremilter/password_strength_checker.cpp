#include <iostream>
#include <string>

using namespace std;

int main() {

    string password;
    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecial = false;

    cout << "Enter your password: ";
    cin >> password;

    for (char c : password) {

        if (isupper(c))
            hasUpper = true;

        else if (islower(c))
            hasLower = true;

        else if (isdigit(c))
            hasDigit = true;

        else
            hasSpecial = true;
    }

    int score = hasUpper + hasLower + hasDigit + hasSpecial;

    if (password.length() < 6)
        cout << "Password strength: Weak" << endl;

    else if (score >= 3)
        cout << "Password strength: Strong" << endl;

    else
        cout << "Password strength: Medium" << endl;

    return 0;
}
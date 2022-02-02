#include<iostream>

using namespace std;

int main() {
    cout << "Check the length of two strings:" << endl;
    cout << "------------------------------------" << endl;

    char nam[100];
    char* n = nam;
    cout << "Input the 1st string: ";
    cin >> nam;

    char nam2[100];
    cout << "Input the 2nd string: ";
    cin >> nam2;
    char* m = nam2;

    if (*n == *m) {
        cout << "Strings are Equal" << endl;
    }
    else {
        cout << "Strings are not equal" << endl;
    }
    cin.get();
}

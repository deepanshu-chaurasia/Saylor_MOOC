#include<iostream>

using namespace std;

int main() {
    cout << "Check the length of two strings:" << endl;
    cout << "------------------------------------" << endl;

    char nam[20];
    cout << "Input the 1st string: ";
    cin >> nam;

    char nam2[20];
    cout << "Input the 2nd string: ";
    cin >> nam2;

    cout << nam << " " << nam2 <<endl;
    
    int n = 0;
    
    for (int i = 0; i < sizeof(nam); i++) {
        if (nam[i] == nam2[i]) {
            n++;
        }
    }
    if (n == 20) {
        cout << "same words!" << endl;

    }
    else {
        cout << "different words" << endl;

    }
    cin.get();
}



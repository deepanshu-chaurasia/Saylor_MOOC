#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cout << "Input the string; ";
    getline(cin, str);
    int i, alp, dgt, spch;
    i = 0;
    alp = 0;
    dgt = 0;
    spch = 0;
    cout << str;

    for (i = 0; i < str.size(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') {
            alp++;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            dgt++;
        }
        else {
            spch++;
        }
    }
    cout << "Number of Alphabets in the string is : " << alp << endl;
    cout << "Number of Digits in the string is : " << dgt << endl;
    cout << "Number of Special characters in the string is : " << spch << endl;
    cin.get();
}

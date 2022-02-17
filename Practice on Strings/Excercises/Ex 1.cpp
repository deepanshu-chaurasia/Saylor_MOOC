#include<iostream>
#include<string>

using namespace std;

int main() {

    string nam;
    getline(cin, nam);
    int n = 1;

    for (int i = 0; i < nam.size(); i++) {

        if (nam[i] == ' ' || nam[i] == '\n' || nam[i] == '\t') {
            n++;
        }
    }
    cout << "Number of words: " << n << endl;
      cin.get();
}

#include<iostream>
#include<string>

using namespace std;

void sum(int& result) {
    int a, b;
    cout << "Enter Two Numbers: \n";
    cin >> a;
    cin >> b;
    cout << endl;

    result = a + b;
    cout << "Sum of " << a << " and " << b << " is: " << result << endl;

}

int main() {
    int add;
    sum(add);

    cin.get();
}
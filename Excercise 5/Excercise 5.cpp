#include<iostream>

using namespace std;

double calculator(double& result) {
    double a, b;
    char operation;

    cout << "Press: (+) for Addition,(-) for Subtraction,(*) for Multiplication,(/) for Division, (^) for Power \n";
    cout << "\nEnter First Numbers: ";
    cin >> a;
    cout << "Operation: ";
    cin >> operation;
    cout << "Enter Second Numbers: ";
    cin >> b;
   
    cout << "\n--------------------------------------------" << endl;
    switch (operation) {
    case '+':
        result = a + b; break;

    case '-':
        result = a - b; break;

    case '*':
        result = a * b;  break;

    case '/':
        result = a / b; break;

    case '^':
        result = pow(a, b); break;

    }
    return result;
}

int main() {
    double x;
    cout << "Result: " << calculator(x) << endl;
    cin.get();
}

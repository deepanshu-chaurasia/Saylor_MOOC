#include<iostream>

using namespace std;

int main() {
    int operation;
    cout << "What Arithmetic Operation do you want to perform:\n";
    cout << "Press: (1) for Addition,(2) for Subtraction,(3) for Multiplication,(4) for Division, (5) for Modulo, (6) for Power \n";
    cin >> operation;

    int a, b;
    cout << "\nEnter Two Numbers: \n";
    cin >> a;
    cin >> b;

    cout << "\n--------------------------------------------" << endl;
    switch (operation)

    {
    case 1:
        cout << "Sum of " << a << " and " << b << " is: " << a + b << endl;
        break;

    case 2:
        cout << "Substraction of " << a << " and " << b << " is: " << a - b << endl;
        break;

    case 3:
        cout << "Multiplication of " << a << " and " << b << " is : " << a * b << endl;
        break;

    case 4:
        cout << "Division of " << a << " and " << b << " is: " << a / b << endl;
        break;

    case 5:
        cout << "Modulo of " << a << " and " << b << " is: " << a % b << endl;
        break;

    case 6:
        cout << "Value when " << a << " powers " << b << " is: " << pow(a, b) << endl;
        break;

    }

    cin.get();
}


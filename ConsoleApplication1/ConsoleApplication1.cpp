#include<iostream>
using namespace std;


void employee_dat()
{
    string theEmployee;
    float theHoursWorked;
    float thePayRate;
    bool overtime;
    float additional_hrs;
    float total;

    cout << "Name of the Employee: ";
    cin >> theEmployee;
    cout << endl;

    cout << "Hours Worked: ";
    cin >> theHoursWorked;
    cout << endl;

    cout << "Any Overtime: ";
    cin >> overtime;
    if (overtime == true) {
        cout << "Overtime hours: ";
        cin >> additional_hrs;
        theHoursWorked = theHoursWorked + additional_hrs;
        cout << endl;
    }

    cout << "Pay rate (per hour): ";
    cin >> thePayRate;
    cout << endl;

    total = theHoursWorked * thePayRate;
    cout << "name: " << theEmployee << endl;
    cout << "payment: " << total;

}

int main() {

    employee_dat();
    return 0;
}
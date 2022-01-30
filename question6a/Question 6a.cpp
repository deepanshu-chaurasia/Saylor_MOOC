#include<iostream>
using namespace std;


void employee_data(string& theEmployee,
    float& theHoursWorked,
    float& thePayRate)
{
    cout << "Name of the Employee: ";
    cin >> theEmployee;
    cout << endl;

    cout << "Hours Worked: ";
    cin >> theHoursWorked;
    cout << endl;


    cout << "Pay rate (per hour): ";
    cin >> thePayRate;
    cout << endl;
}

float calulate(string& theEmployee,
    float& theHoursWorked,
    float& thePayRate, float& pay,
    float& additional_hrs) {

    bool overtime;
    float overtime_pay;
    cout << "Any Overtime('1' for yes and '0' for no): ";
    cin >> overtime;
    if (overtime == true && theHoursWorked > 40) {
        cout << "Overtime hours: ";
        cin >> additional_hrs;
        overtime_pay = (1.5 * thePayRate) * additional_hrs;
        cout << endl;
        pay = (theHoursWorked * thePayRate) + overtime_pay;
    }
    else if (overtime == true && theHoursWorked <= 40) {
        cout << "Overtime hours: ";
        cin >> additional_hrs;
        overtime_pay = thePayRate * additional_hrs;
        cout << endl;
        pay = (theHoursWorked * thePayRate) + overtime_pay;
    }
    else {
        additional_hrs = 0;
        pay = (theHoursWorked * thePayRate);
    }

    return pay;
}

void output(string& theEmployee,
    float& theHoursWorked,
    float& thePayRate) {
    float pay;
    float additional_hrs;

    calulate(theEmployee, theHoursWorked, thePayRate, pay, additional_hrs);

    cout << "-----------------------------------------------------" << endl;
    cout << "Name: " << theEmployee << endl;
    cout << "Hours Worked: " << theHoursWorked << endl;
    cout << "Pay Rate: " << thePayRate << endl;
    cout << "Overtime Hours: " << additional_hrs << endl;
    cout << "Salary: " << pay << endl;
    cout << "-----------------------------------------------------" << endl;
}

int main() {
    string name;
    float worked;
    float rate;

    for (int i = 1; i <= 5; i++) {
        employee_data(name, worked, rate);
        output(name, worked, rate);

        cout << endl;
    }

    cin.get();

}
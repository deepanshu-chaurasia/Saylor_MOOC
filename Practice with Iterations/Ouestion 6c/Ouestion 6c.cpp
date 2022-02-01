#include<iostream>
#include<string>

using namespace std;

string getName(string first_name, string last_name) {

    return (first_name + last_name);
}

int getHours(float rate, float monday, float tuesday, float wednesday, float thursday, float friday) {
    
    float hours = monday + tuesday + wednesday + thursday + friday;
    float pay;

    cout << "Total hours worked: " << hours << endl;
    if (hours >= 40) {
        cout << "Bonus received: 10% " << endl;
        pay = (rate * hours) * 1.10;
    }
    else {
        cout << "Pay deducted by: 10% " << endl;
        pay = (rate * hours) * 0.90;
    }

    return pay;
}

int main() {
    string first_name;
    string last_name;
    float rate;
    float monday,tuesday,wednesday,thursday,friday;

    cout << "First name: ";
    getline(cin, first_name);

    cout << "Last name: ";
    getline(cin, last_name);
    cout << endl;

    cout << "Pay Rate per hour: ";
    cin >> rate;

    cout << "Mention Hours Worked each day:" << endl;
    cout << "Monday: ";
    cin >> monday; 
  
    cout << "Tuesday: "; 
    cin >> tuesday; 

    cout << "Wednesday: ";
    cin >> wednesday;
  
    cout << "Thusday: ";
    cin >> thursday;

    cout << "Friday: ";
    cin >> friday;
    cout << endl;

    cout << "------------------------------------------------" << endl;
    cout << "Name: " << getName(first_name,last_name) << endl;
    cout << "Pay: " << getHours(rate, monday, tuesday, wednesday, thursday, friday)<<endl;
    
    cin.get();
}

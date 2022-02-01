#include<iostream>
using namespace std;

int movie_ticket = 300;
int popcorn = 100;

void others(bool& add_popcorn) {
    float discount;
    if (add_popcorn == true) {
        discount = 10;
        cout << "Recieved Discount: " << discount << "%" << endl;

        cout << "Final amount to pay: " << ((0.90 * movie_ticket) + popcorn) << endl;
    }
    else {
        discount = 0;
        cout << "Final amount to pay: " << movie_ticket << endl;
    }
}
void customer_ps(char& customer_type) {
    float discount;
    bool add_popcorn;
    cout << "Mention Your Customer Type(type 'p' for Pensioner,(s) for Student,(o) for Others): " << endl;
    cin >> customer_type;

    if (customer_type == 'p' || customer_type == 's') {
        cout << "Do want Popcorns? ('1' for yes | '0' for no): ";
        cin >> add_popcorn;
        cout << "---------------------------------------------------" << endl;
        if (add_popcorn == false) {
            discount = 10;
            cout << "Recieved Discount: " << discount << "%" << endl;
            cout << "Final amount to pay: " << (0.90 * movie_ticket) << endl;
        }
        else if (add_popcorn == true) {
            discount = 20;
            cout << "Recieved Discount: " << discount << "%" << endl;
            cout << "Final amount to pay: " << ((0.80 * movie_ticket) + popcorn) << endl;
        }
    }
    else if (customer_type == 'o') {
        cout << "Do want Popcorns? ('1' for yes | '0' for no): ";
        cin >> add_popcorn;
        cout << "---------------------------------------------------" << endl;
        others(add_popcorn);
    }
    else {
        cout << "Incorrect Customer type!" << endl;
    }
}

int main() {
    char customer_type;
    customer_ps(customer_type);

    cin.get();

}
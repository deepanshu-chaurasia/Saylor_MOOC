#include<iostream>

using namespace std;

int fibonacci(int n) {

    if ((n == 1) || (n == 0)) {
        return(n);
    }
    else {
        return(fibonacci(n - 1) + fibonacci(n - 2));
    }

}

int main() {
    int x;
    cout << "Number of terms of series : ";
    cin >> x;
    cout << "\nFibonnaci Series : ";
    for (int i = 0; i < x; i++) {
        cout << " " << fibonacci(i);
    }
    cout << endl;
    cin.get();
}


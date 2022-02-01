#include<iostream>

using namespace std;

void fibonacci(int n) {
    int fib_0 = 0;
    int fib_1 = 1;
    int fib;

    cout << "\n Fibonacci series: " << fib_0 << " " << fib_1 << " ";
    for (int i = 2; i < n; i++) {
        fib = fib_0 + fib_1;
        cout << fib << " ";
        fib_0 = fib_1;
        fib_1 = fib;
    }
}

int main() {
    int x;
    cout << "Number of terms of series : ";
    cin >> x;

    fibonacci(x);
    cout << endl;

    cin.get();
}


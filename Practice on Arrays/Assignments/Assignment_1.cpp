#include<iostream>

using namespace std;

int main() {
    int n = 0;

    cout << "Enter number of elements in array: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter " << n << " elements :" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "\nReverse of the array:" << endl;

    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << endl;
    }

    delete[] arr;

    return 0;
}



//The first two elements have been sorted using a selection sort. 
//What would be the value of the elements in the array after three more passes of the selection sort algorithm?

#include<iostream>

using namespace std;

void swap(int& x, int& y);
void selection_sort(int arr[], int n);


int main() {
    int arr[] = { 7, 8, 26, 44, 13, 23, 98, 57 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int n = 0;
    cout << "Given Array: ";
    for (int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nEnter the number of elements to sort in the array: ";
    cin >> n;

    selection_sort(arr, n);

    cout << "Sorted array: \n";
    for (int i = 0; i < arr_size; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}

void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

// Function to implement selection sort

void selection_sort(int arr[], int n) {
    int min;
    for (int i = 0; i < n - 1; i++) {

        min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;

            }
        }
        swap(arr[min], arr[i]);
    }

}



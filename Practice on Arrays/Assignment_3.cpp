#include<iostream>

using namespace std;

bool binary_search(int arr[], int n, int key);

int main() {
    int arr[] = { 8, 13, 17, 26, 44, 56, 88, 97 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int key = 0;
    cout << "Given Array: ";
    for (int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }
    

    cout << "\nEnter the number to search: ";
    cin >> key;

    
    cout << binary_search(arr, arr_size, key);
    return 0;
}

bool binary_search(int arr[], int n, int key) {
	int m = n / 2;

	if (arr[m] == key) {
		cout << "key found at: arr[" << m << "]" << endl;
		return true;
	}
	else if (key < arr[m]) {
		for (int j = 0; j <= m - 1; j++) {
			if (arr[j] == key) {
				cout << "key found at: arr[" << j << "]" << endl;
				return true;
			}
		}
	}
	else if (key > arr[m]) {
		for (int k = m + 1; k < n; k++) {
			if (arr[k] == key) {
				cout << "key found at: arr[" << k << "]" << endl;
				return true;
			}

		}
	}
	else {
		cout << "key not found" << endl;
	}
	return false;
}



#include <iostream>
#include <algorithm>
#include<cmath>

using namespace std;

int add(int a) { return a; }

int add(int a, int b = 0) { return a + b; }

//int add(int a, int b, int c = 0) { return a + b + c; }

//double add(double a, double b, double c = 0.0) { return a + b + c; }

int main() {
    add(1);
    add(1, 2);
    //add(1, 2, 3);
    //add(1.0, 2.0, 3.0);

    return 0;
}








































/*#include <iostream>
#include <algorithm>

using namespace std;

void getSorted(int arr[], int n) {

    int temp = 0;
    for (int i = 0; i < sizeof(arr); i++) {  // LINE-1
        for (int j = 0; j < sizeof(arr) - 1; j++) {
            if (arr[j] > arr[i]) {
                temp = arr[i];
                     arr[i] = arr[j];
                arr[j] = temp;

            }
        }
     }
}
int main() {
    int n1, n2;
    int data[] = { 20, 50, 60, 40, 10, 30 };
    //cin >> n1 >> n2;

    int n = sizeof(data) / sizeof(data[0]);

    //find_and_update(data, n, n1, n2);

    /*for (int i = 0; i < n; i++)
        cout << data[i] << " ";
    cout << endl;

    getSorted(data, n);
   for (int i = 0; i < n; i++)
        cout << data[i] << " ";
    return 0;
}
*/
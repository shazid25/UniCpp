#include <bits/stdc++.h>
using namespace std;

int SumOfArray(int* arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int result = SumOfArray(arr, n);
    cout << "Sum of array elements = " << result << endl;

    return 0;
}

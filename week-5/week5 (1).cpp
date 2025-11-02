#include<bits/stdc++.h>
using namespace std;

double AVG () {
    int sum = 0, n = 0;

    while (true) {
        int mark;
        cout << "Enter a mark: ";
        cin >> mark;

        if (mark < 0 || mark > 100)
            break;

        n++;
        sum = sum + mark;
    }

    double ans = (double)sum / n;
    return ans;
}

void ArrayOperation () {

    int n, start;
    cout << "Enter array size: ";
    cin >> n;
    cout << "Enter start value: ";
    cin >> start;

    int arr[n];
    arr[0] = start;

    for (int i=1; i<n; i++)
        arr[i] = arr[i-1] * 3;

    cout << "Array: ";

    for (int i=0; i<n; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int SumOfArray (int* arr, int n) {
    int sum = 0;

    for (int i=0; i<n; i++)
        sum += arr[i];

    return sum;
}

int main() {

//    double res = AVG();
//
//    cout << "Average of marks = " << res << endl;

    //ArrayOperation();

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = SumOfArray(arr, n);

    cout << "Sum = " << ans << endl;

    return 0;
}

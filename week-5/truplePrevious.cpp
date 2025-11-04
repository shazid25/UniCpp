#include<bits/stdc++.h>
using namespace std;

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

int main(){
ArrayOperation();

return 0;
}

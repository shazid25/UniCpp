#include <bits/stdc++.h>
using namespace std;

void PrintFrequency(int arr[], int n) {
    
    map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++; 
    }

    cout << "Element frequencies:" << endl;
    for (auto it : freq) {
        cout << it.first << " appears " << it.second << " times" << endl;
    }
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    PrintFrequency(arr, n);

    return 0;
}

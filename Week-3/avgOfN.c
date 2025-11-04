#include<bits/stdc++.h>
using namespace std;

float Average(int n) {
    float sum = 0, num;
    for (int i = 1; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        sum += num;
    }
    float avg = sum / n;
    return avg;
}

int main() {
    int n;
    cout << "Enter how many numbers: ";
    cin >> n;

    float result = Average(n);
    cout << "Average = " << result << endl;

    return 0;
}

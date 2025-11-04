#include <bits/stdc++.h>
using namespace std;

void CheckPrime (int x) {
    int check = 0;
    for (int i=2; i<x; i++) {
        if (x % i == 0) {
            check = 1;
            break;
        }
    }

    if (check == 0)
        cout << x << " is a prime" << endl;
    else
        cout << x << " is not a prime" << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    CheckPrime(n);

    return 0;
}

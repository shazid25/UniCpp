#include<bits/stdc++.h>
using namespace std;

int MaxOfThree (int a, int b, int c) {
    if (a > b && a > c)
        return a;

    if (b > a && b > c)
        return b;

    return c;
}

int CustomSum (int x, int y) {
    int sum = 0;
    for (int i=x; i<=y; i++) {
        if (i % 7 == 0)
            continue;
        sum = sum + i;
    }
    return sum;
}

void PrintDivisors (int x) {
    cout << "Divisors of " << x << ": ";
    for (int i=1; i<=x; i++) {
        if (x % i == 0)
            cout << i << " ";
    }
    cout << endl;
}

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

void ConvertTime (int seconds) {
    int h = seconds/3600;
    int m = (seconds - (h*3600))/60;
    int s = seconds - (h*3600) - (m*60);

    cout << "Time = " << h << " : " << m << " : " << s << endl;
}

int main() {

//    int a, b, c;
//    cout << "Enter three numbers: ";
//    cin >> a >> b >> c;
//
//    int ans = MaxOfThree(a, b, c);

//    int x, y;
//    cout << "Enter range = ";
//    cin >> x >> y;
//
//    int ans = CustomSum(x, y);
//
//    cout << "Sum = " << ans << endl;

    ConvertTime(5400);

    return 0;
}

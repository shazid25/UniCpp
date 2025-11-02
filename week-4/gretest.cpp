#include <bits/stdc++.h>
using namespace std;

float Max(float a, float b, float c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main() {
    float a, b, c;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;

    float ans = Max(a, b, c); 
    cout << "The greatest number is: " << ans << endl;

    return 0;
}

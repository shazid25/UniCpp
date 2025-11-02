#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
    //return (n == 1) ? 1 : n * factorial(n-1);

    // base/exit condition
    cout << "I'm calling factorial(" << n << ")\n";
    if (n == 1)
        return 1;

    int ans = n * factorial(n-1);
    cout << "Calculation done! factorial(" << n << ") = " << ans << endl;
    return ans;
}

void Test(int n) {
    if (n>1) {
        Test(n-1);
        cout << n << endl;
    }
}

int fibonacci(int n) {
    if (n <= 1)
        return n;

    return fibonacci(n-1)+fibonacci(n-2);
}

int power(int a, int b) {
    if (b == 0)
        return 1;

    return a * power(a, b-1);
}

int main() {

//    cout << factorial(5) << endl;

    cout << power(2, 3) << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

long long factorial(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    long long result = factorial(num);
    cout << "Factorial of " << num << " is: " << result << endl;

    return 0;
}

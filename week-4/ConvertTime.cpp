#include <bits/stdc++.h>
using namespace std;

void ConvertTime(int seconds) {
    int h = seconds / 3600;
    int m = (seconds - (h * 3600)) / 60;
    int s = seconds - (h * 3600) - (m * 60);

    cout << "Time = " << h << " : " << m << " : " << s << endl;
}

int main() {
    int seconds;

    cout << "Enter total seconds: ";
    cin >> seconds;

    ConvertTime(seconds); 

    return 0;
}

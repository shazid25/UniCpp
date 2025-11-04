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

int main(){
   double res = AVG();

   cout << "Average of marks = " << res << endl;


    return 0;

    }

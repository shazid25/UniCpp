#include <bits/stdc++.h>
using namespace std;
#define PI 3.1416

float AreaCircle(float r) {
    float area = PI * (r * r);
    return area;
}

int main() {
    float area, r;

    cout << "Enter the radius: ";
    cin >> r;

    area = AreaCircle(r); 
    cout << "The area of the circle is: " << area << endl;

    return 0;
}

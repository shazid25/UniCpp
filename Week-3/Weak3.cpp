#include<bits/stdc++.h>
using namespace std;

#define PI 3.14159

// return_type fn_name (parameters) {
//      fn body
//  }

void Rectangle (float height, float width) {
    double area = height * width;
    double perimeter = 2 * (height + width);

    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;
}

double calcArea (float height, float width) {
    double ans = height * width;
    return ans;
}

double calcPerimeter (float height, float width) {
    double ans = 2 * (height + width);
    return ans;
}

double calcCircleArea(float d) {
    double ans = (PI * d * d) / 4;
    return ans;
}

double calcCirclePerimeter(float d) {
    double res = PI * d;
    return res;
}

void calcAvg (int n) {
    int sum = 0, x;
    for (int i=0; i<n; i++) {
        cout << "Enter a value = ";
        cin >> x;
        sum = sum + x;
    }

    float avg = (float)sum / n;
    cout << "Average of n numbers = " << avg << endl;
}

double FindDistance (int x1, int y1, int x2, int y2) {
    double ans = sqrt((x1 - x2)*(x1 - x2)+(y1 - y2)*(y1 - y2));
    return ans;
}

void checkMultiple (int a, int b) {
    if (b > a)
        swap(a, b);

    if (a % b == 0)
        cout << a << " is a multiple of " << b << endl;
    else
        cout << a << " is not a multiple of " << b << endl;
}

int main() {

//    float a, b; // declaration
//
//    cout << "Enter height: ";
//    cin >> a;
//
//    cout << "Enter width: ";
//    cin >> b;
//
//    Rectangle(a, b);


//    double area = calcArea(a, b);
//    cout << "Area = " << area << endl;
//
//    double perimeter = calcPerimeter(a, b);
//    cout << "Perimeter = " << perimeter << endl;

//    float d;
//    cout << "Enter diameter of circle = ";
//    cin >> d;
//
//    double area = calcCircleArea(d);
//    cout << "Area of circle = " << area << endl;
//
//    double perimeter = calcCirclePerimeter(d);
//    cout << "Perimeter of circle = " << perimeter << endl;

//    int n;
//    cout << "Enter no. of values = ";
//    cin >> n;
//
//    calcAvg(n);

    //    int x1, y1, x2, y2;
    //    cout << "Enter first point = ";
    //    cin >> x1 >> y1;
    //    cout << "Enter second point = ";
    //    cin >> x2 >> y2;
    
    //    cout << "Distance between two points = " << FindDistance(x1, y1, x2, y2) << endl;

    // int x, y;
    // cout << "Enter two numbers = ";
    // cin >> x >> y;

    // checkMultiple(x, y);

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define PI 3.1416

void Rectangle(float height, float width, float &area, float &perimeter) {
    area = height * width;
    perimeter = 2 * (height + width);
}

int main() {
    float height, width;
    float area, perimeter;

    cout << "Enter the height: ";
    cin >> height;

    cout << "Enter the width: ";
    cin >> width;

    Rectangle(height, width, area, perimeter);

    cout << "The area of rectangle is: " << area << endl;
    cout << "The perimeter of rectangle is: " << perimeter << endl;

    return 0;
}

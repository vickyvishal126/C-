#include <iostream>
using namespace std;
int main() {
    float radius, length, breadth, area_circle, area_rectangle;
    const float PI = 3.14;
     // Area of a circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    area_circle = PI * radius * radius;
	cout << "Area of the circle = " << area_circle << endl;

    // Area of a rectangle
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> length >> breadth;
	area_rectangle = length * breadth;
	cout << "Area of the rectangle = " << area_rectangle << endl;

    return 0;
}

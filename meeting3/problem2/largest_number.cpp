#include <iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    cout << "Enter the value of z: ";
    cin >> z;
    if ((x > z) && (x > y)) {
        cout << "Largest number is: " << x << endl;
    }
    else if ((y > z) && (y > x)) {
        cout << "Largest number is: " << y << endl;
    }
    else {
        cout << "Largest number is: " << z << endl;
    }
}
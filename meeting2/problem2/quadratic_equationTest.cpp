#include <iostream>
#include <cmath>    
#include <iomanip> 

using namespace std;

int main() {
    double a, b, c, discriminant, sqrtDiscriminant;
    double x1, x2;
    double a1, b1, c1;
    double a2, b2, c2;
    
    a1 == a;
    b1 == b;
    c1 == c;
    
    a2 == a;
    b2 == b;
    c2 == c;

    a = 5;
    b = 2;
    c = 10;
    
    a1 = 2;
    b1 = 4;
    c1 = 1;
    
    a2 = 1;
    b2 = 2;
    c2 = 1;
    
    cout << "Case 1 (no real root)" << endl;
    cout << "a = 5" << endl;
    cout << "b = 2" << endl;
    cout << "c = 10" << endl;
    
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        sqrtDiscriminant = sqrt(discriminant);
        x1 = (-b + sqrtDiscriminant) / (2 * a);
        x2 = (-b - sqrtDiscriminant) / (2 * a);
        cout << "There are two distinct real roots in the qudratic equation:" << endl;
        cout << "x1 = " << fixed << setprecision(2) << x1 << endl;
        cout << "x2 = " << fixed << setprecision(2) << x2 << endl;
    } else if (discriminant == 0) {
        x1 = -b / (2 * a);
        cout << "There is exactly one real root in the quadratic equation:" << endl;
        cout << "x = " << fixed << setprecision(2) << x1 << endl;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "There are no real root in the quadratic equation (the roots are complex):" << endl;
    }
    cout << endl;
    
    cout << "Case 2 (two distinct roots)" << endl;
    cout << "a = 2" << endl;
    cout << "b = 4" << endl;
    cout << "c = 1" << endl;
    
    discriminant = b1 * b1 - 4 * a1 * c1;

    discriminant = b1 * b1 - 4 * a1 * c1;

    if (discriminant > 0) {
        sqrtDiscriminant = sqrt(discriminant);
        x1 = (-b1 + sqrtDiscriminant) / (2 * a1);
        x2 = (-b1 - sqrtDiscriminant) / (2 * a1);
        cout << "There are two distinct real roots in the qudratic equation:" << endl;
        cout << "x1 = " << fixed << setprecision(2) << x1 << endl;
        cout << "x2 = " << fixed << setprecision(2) << x2 << endl;
    } else if (discriminant == 0) {
        x1 = -b1 / (2 * a1);
        cout << "There is exactly one real root in the quadratic equation:" << endl;
        cout << "x = " << fixed << setprecision(2) << x1 << endl;
    } else {
        double realPart = -b1 / (2 * a1);
        double imaginaryPart = sqrt(-discriminant) / (2 * a1);
        cout << "There are no real root in the quadratic equation (the roots are complex):" << endl;
    }
    cout << endl;
    
    cout << "Case 3 (exactly one real root)" << endl;
    cout << "a = 1" << endl;
    cout << "b = 2" << endl;
    cout << "c = 1" << endl;
    
    discriminant = b2 * b2 - 4 * a2 * c2;
    
    if (discriminant > 0) {
        sqrtDiscriminant = sqrt(discriminant);
        x1 = (-b2 + sqrtDiscriminant) / (2 * a2);
        x2 = (-b2 - sqrtDiscriminant) / (2 * a2);
        cout << "There are two distinct real roots in the qudratic equation:" << endl;
        cout << "x1 = " << fixed << setprecision(2) << x1 << endl;
        cout << "x2 = " << fixed << setprecision(2) << x2 << endl;
    } else if (discriminant == 0) {
        x1 = -b2 / (2 * a2);
        cout << "There is exactly one real root in the quadratic equation:" << endl;
        cout << "x = " << fixed << setprecision(2) << x1 << endl;
    } else {
        double realPart = -b2 / (2 * a2);
        double imaginaryPart = sqrt(-discriminant) / (2 * a2);
        cout << "There are no real root in the quadratic equation (the roots are complex):" << endl;
    }
    
    return 0;
}

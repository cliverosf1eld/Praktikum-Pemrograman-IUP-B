#include <iostream>
#include <cmath>    
#include <iomanip> 

using namespace std;

int main() {
    double a, b, c, discriminant, sqrtDiscriminant;
    double x1, x2;

    cout << "Enter the coefficient of a: ";
    cin >> a;
    cout << "Enter the coefficient of b: ";
    cin >> b;
    cout << "Enter the coefficient of c: ";
    cin >> c;

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        sqrtDiscriminant = sqrt(discriminant);
        x1 = (-b + sqrtDiscriminant) / (2 * a);
        x2 = (-b - sqrtDiscriminant) / (2 * a);
        cout << "x1 and x2 are real and distinct:" << endl;
        cout << "x1 = " << fixed << setprecision(2) << x1 << endl;
        cout << "x2 = " << fixed << setprecision(2) << x2 << endl;
    } else if (discriminant == 0) {
        x1 = -b / (2 * a);
        cout << "x1 and x2 are real and equal:" << endl;
        cout << "x = " << fixed << setprecision(2) << x1 << endl;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "x1 and x2 are imaginary:" << endl;
    }
    return 0;
}

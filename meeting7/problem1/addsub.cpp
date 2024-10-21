#include <iostream>
using namespace std;

void addition (float a, float b){
    cout << a << " + " << b << " = " << a + b;
}
void subtraction (float a, float b){
    cout << a << " - " << b << " = " << a - b;
}

int main(){
    float a, b;
    char i;
    
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Choose the operation ('+' or '-'): ";
    cin >> i;
    
    if (i == '+'){
        addition (a, b);
    }
    else if (i == '-'){
        subtraction (a, b);
    }
    else
    cout << "Invalid operation";
    return 0;
}
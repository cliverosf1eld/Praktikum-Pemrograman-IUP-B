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
    char i, i1;
    a = 5;
    b = 10;
    i = '+';
    i1 = '-';
    
    if (i == '+'){
        addition (a, b);
    }
    else if (i == '-'){
        subtraction (a, b);
    }
    else
    cout << "Invalid operation";
    cout << endl;
    
    if (i1 == '+'){
        addition (a, b);
    }
    else if (i1 == '-'){
        subtraction (a, b);
    }
    else
    cout << "Invalid operation";
    
    return 0;
}

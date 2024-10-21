#include <iostream>
using namespace std;

int factorial(int x){
    if (x == 0 || x == 1){
        return 1;
    }
    else
    return x*factorial(x-1);
    
}
int main(){
    int x;
    x = 5;
    
    if (x<0){
        cout << "Factorial of a negative number is not possible";
    }
    else{
        cout << "Factorial of " << x << " is " << factorial(x);
    }
}

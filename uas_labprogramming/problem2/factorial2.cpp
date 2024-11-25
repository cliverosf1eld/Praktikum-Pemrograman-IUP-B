#include <iostream> //factorial of a number
#include <algorithm>
using namespace std;

int main(){
    int factorial = 1;
    int x;
    
    cout << "Enter a number: ";
    cin >> x;
    
    if (x<=0){
        cout << "There is no factorial";
    }
    else if (x>0) {
        for (int i=1; i<=x; i++){
        factorial = factorial * i;
        }
        cout << "Factorial of " << x << " is " << factorial;
    }    
}
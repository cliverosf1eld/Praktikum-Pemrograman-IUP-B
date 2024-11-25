#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int x, sum;
    cout << "Enter a number: ";
    cin >> x;
    
    while (x>0){
        sum += x%10;
        x /= 10;
    }
    cout << "Sum of the digits is " << sum;
}               
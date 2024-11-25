#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int x, sum;
    x = 252;
    
    while (x>0){
        sum += x%10;
        x /= 10;
    }
    cout << "Sum of the digits is " << sum;
}

#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The product of n with integers from 1 to 10:" << endl;
    for (i=1; i<=10; i++) 
    {
    cout << n << 'x' << i << '=' << n*i << endl;
    }
}

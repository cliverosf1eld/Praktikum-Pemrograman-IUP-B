#include <iostream> //question 4: finding maximum in a list
#include <algorithm>
using namespace std;

int main(){
    int al;
    cout << "Enter the amount of numbers in the list: ";
    cin >> al;
    int a[al];
    cout << "Enter the numbers in the list:" << endl;
    for (int i=0; i<al; i++){
        cin >> a[i];
    }
    sort(a, a + al);
    
    cout << "The maximum number on the list is " << a[al-1];
}
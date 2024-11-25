#include <iostream> //question 4: finding maximum in a list
#include <algorithm>
using namespace std;

int main(){
    int al = 5;
    int a[al] = {5, 3, 2, 1, 8};
    sort(a, a + al);
    
    cout << "The maximum number on the list is " << a[al-1];
}

#include <iostream>
using namespace std;

int main(){
    bool found = true;
    long int data[] = {9960312699, 9963959682, 9950310962, 9970272750, 9970293945, 9952382180, 9965653989};
    long int i=0, j = sizeof(data) / sizeof(data[0]), k, query = 9950310962;
    while (!found&&1<=j){
        k = (i+j)/2;
        if (data[k]<query){
            i = k + 1;
        }
        else if (data[k] == query) {
            found = true;
        }
        else {
            j = k - 1;
        }
    }
    if (!found){
        cout << "Not found";
    }
    else{
        cout << "Found, value is 80";
    }

    cout << "Test is successful";
    return 0;
}

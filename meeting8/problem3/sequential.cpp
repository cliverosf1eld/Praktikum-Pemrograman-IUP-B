#include <iostream>
using namespace std;

int main() {
    bool found = false;
    
    string name[] = {"Handi Ramadhan", "Rio Alfandra", "Ronaldo Valentino Uneputty", 
                     "Achmad Yaumil Fadjri R.", "Alivia Rahma Pramesti", "Ari Lutfianto", "Arief Budiman"};
    long int nisn[] = {9960312699, 9963959682, 9950310962, 9970272750, 9970293945, 9952382180, 9965653989};
    int value[] = {90, 55, 80, 60, 70, 65, 60};
    
    int chosen = 60;
    
    for (int i = 0; i < 7; i++) {
        if (value[i] == chosen) {
            cout << "Joko" << ", " << nisn[i] << ", " << value[i] << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Not found" << endl;
    }

    return 0;
}

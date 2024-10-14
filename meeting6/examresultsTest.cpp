#include <iostream>
using namespace std;

struct data
{
    int nim;
    float uts;
    float uta;
    float avg;
};

int main(){
    char input;
    int n;
    int i;
    struct data student[50];
    
    n = 3;

    for (i=0; i<n; i++){
        student[i].nim = 100 + i;
        student[i].uts = 100;
        student[i].uta = 50;
        student[i].avg = (student[i].uts + student[i].uta) / 2;
    }
    for (int i=0; i<n; i++){
        cout << "NIM: " << student[i].nim << endl << "Average : " << student[i].avg << endl;
    }
    cout << "Test is successful" << endl;
    return 0;
}

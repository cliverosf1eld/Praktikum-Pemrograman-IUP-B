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
    
    cout << "Number of students (max is 50): ";
    cin >> n;

    for (i=0; i<n; i++){
        cout << "Enter the student's NIM: ";
        cin >> student[i].nim;
        cout << "Enter the student's UTS result: ";
        cin >> student[i].uts;
        cout << "Enter the student's UTA result: ";
        cin >> student[i].uta;
        student[i].avg = (student[i].uts + student[i].uta) / 2;
    }
    for (int i=0; i<n; i++){
        cout << "NIM: " << student[i].nim << endl << "Average : " << student[i].avg << endl;
    }
    return 0;
}

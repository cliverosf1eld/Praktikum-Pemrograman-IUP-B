#include <iostream>
using namespace std;

struct Data {
    long int value;
};

void insertionsort(Data arr[], int size) {
    Data temp;
    for (int j = 1; j < size; j++) {
        int i = j - 1;
        temp = arr[j];
        while (i >= 0 && arr[i].value < temp.value) {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = temp;
    }
}

void selectionsort(Data arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int max = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j].value > arr[max].value) {
                max = j;
            }
        }
        Data temp = arr[i];
        arr[i] = arr[max];
        arr[max] = temp;
    }
}

void bubblesort(Data arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j].value < arr[j + 1].value) {
                Data temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printData(const Data arr[], int size) {
    for (int j = 0; j < size; j++) {
        cout << arr[j].value << " ";
    }
    cout << endl;
}

int main() {
    Data data1[] = { {9960312699}, {9963959682}, {9950310962}, {9970272750}, {9970293945}, {9952382180}, {9965653989} };
    int dataSize1 = sizeof(data1) / sizeof(data1[0]);

    Data data2[] = { {90}, {55}, {80}, {60}, {70}, {65}, {60} };
    int dataSize2 = sizeof(data2) / sizeof(data2[0]);

    insertionsort(data1, dataSize1);
    insertionsort(data2, dataSize2);
    cout << "NISN in descending order using insertion sort: ";
    printData(data1, dataSize1);
    cout << "Values in descending order using insertion sort: ";
    printData(data2, dataSize2);
    cout << endl;
    
    selectionsort(data1, dataSize1);
    selectionsort(data2, dataSize2);
    cout << "NISN in descending order using selection sort: ";
    printData(data1, dataSize1);
    cout << "Values in descending order using selection sort: ";
    printData(data2, dataSize2);
    cout << endl;
    
    bubblesort(data1, dataSize1);
    bubblesort(data2, dataSize2);
    cout << "NISN in descending order using bubble sort: ";
    printData(data1, dataSize1);
    cout << "Values in descending order using bubble sort: ";
    printData(data2, dataSize2);

    return 0;
}

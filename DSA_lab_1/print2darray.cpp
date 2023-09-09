#include <iostream>
using namespace std;
//Printing 2D array using pointers
const int ROWS = 3;
const int COLS = 4;

void print2DArray(int arr[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << *(*(arr + i) + j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    print2DArray(arr);


    getchar();
    return 0;
}
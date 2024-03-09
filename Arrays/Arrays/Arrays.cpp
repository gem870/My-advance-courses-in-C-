
//                   ---------- >  Dynamic Array


#include <iostream>
using namespace std;

void arrayFunction() {
    int arrSize = 5;

    int* newArr = new int[arrSize];
    cout << "Pls enter the number of array you want: " << endl;

    
    for (int i = 0; i < arrSize; i++) {
        cin >> newArr[i];
    }

    for (int i = 0; i < arrSize; i++) {
        cout << "item " << i << " " << *(newArr + i) << endl;
   }

}

void multiDynamicArr() {
    int rows, cols;
    cout << "Pls enter number of rows:  ";
    cin >> rows;
    cout << "Enter number colume: ";
    cin >> cols;

    int** table = new int* [rows];
    for (int i = 0; i < rows; i++) {
        table[i] = new int[cols];
    }

    table[1][2] = 88;

    for (int i = 0;i < rows; i++) {
        delete table[i];
    }
    delete[] table;
    table = NULL;

}

int main()
{
    multiDynamicArr();
    
}



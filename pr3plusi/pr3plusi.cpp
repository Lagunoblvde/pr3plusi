
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    setlocale(0, "");

    const int rows = 3, columns = 5;
    int arr[rows][columns];

    for (int i = 0; i < rows; i++) {
        
        for (int j = 0; j < columns; j++) {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < rows; i++) {
        int stroka = 0;
        for (int j = 0; j < columns; j++) {
            cout << arr[i][j] << "\t";
            stroka += arr[i][j];
        }
        double srednee = stroka / columns;
        cout << "Среднее значение: " << srednee << endl;
    }
    return 0;
}
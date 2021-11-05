#include <iostream>
using namespace std;

/* Program that prints a square */

int main(){

    int a, i, size;

    cout << "Give the size of the square:\n";
    cin >> size;

    for (i = 1; i <= size; i++){
        for (a = 1; a <= size + size - 2; a++){
            if (i == 1 || i == size)
                cout << "8";
            else if (a == 1 || a == size + size - 2)
                cout << "8";
            else if (a > 1 && a < size + size - 2)
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}
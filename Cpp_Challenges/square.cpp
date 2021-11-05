#include <iostream>
using namespace std;

/* Program that prints a square */

int main(){

    int a, i, size = 20;

    for (i = 1; i < size; i++){
        for (a = 1; a < size; a++){
            if (i == 1 || i == size)
                cout << "8";
            else if (a == 1 || a == size)
                cout << "8";
            else if (a > 1 && a < size)
                cout << " ";
        }
    }
}
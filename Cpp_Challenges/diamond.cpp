#include <iostream>
using namespace std;

/* Program to print a triangle */

int main(){
    
    int a, b, size;

    cout << "Write the size of the diamond:\n";
    cin >> size;
    cout << "-----\n";

    for(a = 1; a <= size; a++){
        for(b = 1; b <= size; b++){
            if(b < size - a + 1)
                cout << " ";
            else
                cout << "8";
        }
        for(b = 1; b <= size; b++){
            if(b <= a - 1)
                cout << "8";
            else
                cout << " ";
        }
        cout << endl;
    }
    for(a = 1; a <= size; a++){
        for(b = 1; b <= size; b++){
            if(b < a + 1)
                cout << " ";
            else
                cout << "8";
        }
        for(b = 1; b <= size; b++){
            if(b >= size - a)
                cout << " ";
            else
                cout << "8";
        }
        cout << endl;
    }
}
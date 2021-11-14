#include <iostream>
using namespace std;

// Program to print a concentric square pattern from 1 to 9.

int main(){

    int a, b, last, size;

    cout << "Write the size of the pattern square from 1 to 9:\n";
    cin >> size;
    cout << "\n";

    for(a = 1; a <= size; a++){
        for(b = 1; b <= size; b++){
            if(a < b)
                last = a;
            else
                last = b;
            cout << size - last + 1 << " ";
        }
        for (b = size - 1; b >= 1; b--){
            if (a < b)
                last = a;
            else
                last = b;
        cout << size - last + 1 << " ";
    }
        cout << endl;
    }
    cout << endl;
}
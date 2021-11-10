#include <iostream>
using namespace std;

long long factorial(long long a){
    // Invalid value
    if(a < 0){
        return -1;
    }
    // Base case
    if(a == 1 || a == 0){
        return 1;
    }
    // Recursive case
    else {
        return a * factorial(a - 1);
    }
}

int main(){
    long long a;

    cout << "Write the number to get its factorial:\n";
    cin >> a;

    cout << a << "! = " << factorial(a) << endl;

    return 0;
}
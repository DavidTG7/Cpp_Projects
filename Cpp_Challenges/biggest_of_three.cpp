#include <iostream>
using namespace std;

// Program to select the biggest number of three.

int main(){

    int num1, num2, num3, biggest, aux;

    cout << "Write the first number of three to compare which one is the biggest:\n";
    cin >> num1;
    cout << "Write the second number of three to compare which one is the biggest:\n";
    cin >> num2;
    cout << "Write the third number of three to compare which one is the biggest:\n";
    cin >> num3;

   (num1 > num2) ? aux = num1 : aux = num2;
   (aux > num3) ? biggest = aux : biggest = num3;

   cout << "The biggest number of the three given numbers is: " << biggest << endl;
   
   return 0;
}

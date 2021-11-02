#include <iostream>
using namespace std;

/* Write a short program that prints each number from 1 to 100 on a new line. 
For each multiple of 3, print "Fizz" instead of the number. 
For each multiple of 5, print "Buzz" instead of the number. 
For numbers which are multiples of both 3 and 5, print "FizzBuzz" instead of the number. */

int main(){
    int number = 100;

    for (int i = 1; i <= number; i++){
        if (i % 3 == 0 && i % 5 == 0){
            cout << "FizzBuzz\n";
        }
        else if (i % 3 == 0){
            cout << "Fizz\n";
        }
        else if (i % 5 == 0){
            cout << "Buzz\n";
        }
        else
            cout << i << endl;
    }
}
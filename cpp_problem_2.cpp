// problem-2
// to create a program to find the largest of three numbers.
// code:-   
#include <iostream> //allows us to use std::cout or std::cin
using namespace std;
int main() {
    int A, B, C; //variables to store the three numbers 
    cout << "enter three numbers: "; // asking the input from user 
    cin >> A >> B >> C; //storing the values in variables 
    //finding the largest nuber using if-else statements 
    int max = A; //asuming A is the largest number 
    if (B > max) {
        max = B;
    }
    if (C > max) {
        max = C;
    }
    cout << "The largest number is: " << max << endl;
}
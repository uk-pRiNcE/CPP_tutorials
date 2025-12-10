// problem-3
// to create a program to verify a leap year.
// code:-   
#include <iostream> //allows us to use std::cout or std::cin
using namespace std;
int main() {
    int year;
    cout << "enter a year: "; // asking the input from user
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0)){
        cout << "leap year" <<endl;
    } else {
        cout << "not a leap year" << endl;
    }
    return 0;
}
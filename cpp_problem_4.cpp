// problem-4 
// given a positive integer N, write a program to calculate the sum of all numbers from 1 to N.
// code:-
#include <iostream> //allows us to use std::cout or std::cin
using namespace std;
int main() {
    int N;
    cin >> N; // taking input from user

    int sum = 0; // accumulator

    // a loop that runs from 1 to N
    for (int i = 1 ; i <= N; i++) {
        sum = sum + i; // adding each time
    }
    cout << sum << endl;
    return 0;

}

// to make a more efficient solution, we can use the formula for the sum of the first N natural numbers, which is N * (N + 1) / 2. Here is the optimized code:
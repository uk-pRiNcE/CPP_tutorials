// problem-1 
// to create a program to determine weather the integer is an odd or an even no.
// code:-

#include <iostream> //allows us to use std::cout or std::cin
using namespace std;

int main() {
    int N ; //this will store the number entered by the user 
    cout<<"enter the number:" ; //asking the user 
    cin>>N ; //storing the value in variable

    //check if the input is even or odd
    if (N % 2 == 0){
        cout<<"EVEN" <<endl ;
    } else {
        cout<<"ODD" <<endl ;
    }

    return 0 ; //tell the OS that program ended successfully 
}
// this is my comment

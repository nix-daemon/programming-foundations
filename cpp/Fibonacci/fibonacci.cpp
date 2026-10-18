#include <iostream>
using namespace std;

int main() {
    int n;
    int a = 1;
    int b = 1;
    int fib = 0;

//Commented out for gradescope purposes
//    cout<<"Please enter a positive integer greater than 1: ";
    cin>>n;

    for (int i = 0; i < n; ++i) {
        cout<<a<<endl; // Print the current Fibonacci number
        fib = a + b;
        a = b;
        b = fib;
    }

    return 0;
}
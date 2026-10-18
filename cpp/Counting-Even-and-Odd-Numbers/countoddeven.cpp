#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3, num4;
    int even = 0;
    int odd = 0;

// Commented out for gradescope purposes    
//    cout<<"Please enter 4 positive integers, separated by a space:";
    cin>>num1>>num2>>num3>>num4;

    if (num1 % 2 == 0)
        even += 1;
    else
        odd += 1;
    if (num2 % 2 == 0)
        even += 1;
    else
        odd += 1;    
    if (num3 % 2 == 0)
        even += 1;
    else
        odd += 1;
    if (num4 % 2 == 0)
        even += 1;
    else
        odd += 1;
    
    if (even > odd)
        cout<<"More evens"<<endl;
    else if (odd > even)
        cout<<"More odds"<<endl;
    else
        cout<<"Same number of evens and odds"<<endl;
    return 0;
}
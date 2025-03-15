#include <iostream>
using namespace std;

int main (){
    int num;
    int countDigits, sumDigits;
    int currDigit;

    cout<<"Please neter a positive integer:"<<endl;
    cin>>num;

    currDigit = 0;
    sumDigits = 0;

    while(num > 0){
        currDigit = num % 10;
        countDigits++;
        sumDigits += currDigit;
        num = num / 10;

    }

    cout<<num<<" has "<<countDigits<<" digits and their sum is "<<sumDigits<<endl;
    return 0;
}
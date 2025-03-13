#include <iostream>
using namespace std;

int main(){
    int dollars;
    int coins;
    int quarters;
    int dimes;
    int nickles;
    int pennies;
    int afterQuarters;
    int afterDimes;
    int afterNickles;

// Below line commented out for gradescope purposes

//  cout<<"Enter the amount of money to convert:"<<endl;

    cin>>dollars;
    cin>>coins;

    quarters = ((float)dollars / 0.25) + (coins / 25);
    afterQuarters = coins % 25;
    dimes = afterQuarters / 10;
    afterDimes = afterQuarters % 10;
    nickles = afterDimes / 5;
    afterNickles = afterDimes % 5;
    pennies = afterNickles / 1;

    cout<<"The coins are "<<quarters<<" quarters, "<<dimes<<" dimes, "<<nickles<<" nickels and "<<pennies<<" pennies ";
    return 0;
}
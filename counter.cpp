#include <iostream>
using namespace std;

int main(){
    int quarters;
    int dimes;
    int nickles;
    int pennies;
    cout<<"Please enter the number of coins:"<<endl;

    cin>>quarters;

    cin>>dimes;

    cin>>nickles;

    cin>>pennies;

    int moneyTotal = (quarters * 25) + (dimes * 10) + (nickles * 5) + (pennies * 1);

    cout<<"The total is "<<(moneyTotal / 100)<<" dollars and "<<(moneyTotal % 100)<<" cents"<<endl;
    
    return 0;
}
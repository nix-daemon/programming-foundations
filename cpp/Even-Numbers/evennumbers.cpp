#include <iostream>
using namespace std;

int main(){
    int num;
    int i;
    int ans;

//Below line commented out for gradescope purposes
//    cout<<"Please enter a positive integer ";
    cin>>num;
    i = 1;
    ans = 2;
    while (i <= num){
        cout<<ans<<endl;
        ans += 2;
        i++;
    }
    return 0;
}
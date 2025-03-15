#include <iostream>
using namespace std;

int main(){
    int i;
    int n;
    cout<<"Please enter a positive integer:";
    cin>>n;
    i = 1;

    while (i <= 4){
        cout<<n<<endl;
        i++;
        n++;
    }

    return 0;
}
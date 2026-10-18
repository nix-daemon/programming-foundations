#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float weightKG;
    float heightMeters;
    float BMI;
//commented out for gradescope submission
//    cout<<"Please enter weight in kilograms:"<<endl;
    cin>>weightKG;

//commented  out for gradescope submission    
//    cout<<"Please enter height in meters"<<endl;
    cin>>heightMeters;

    BMI = weightKG / (heightMeters * heightMeters);

    cout<<fixed<<setprecision(2)<<"BMI is: "<<BMI<<endl;

    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;

float lbToKGFactor = 0.453592;
float inchToMeterFactor = 0.0254;

int main(){
    float weightImperial;
    float heightImperial;
    float weightMetric;
    float heightMetric;
    float BMI;
//Below line commented out for gradescope submission
//    cout<<"Please enter weight in pounds:"<<endl;
    cin>>weightImperial;

//Below line commented out for gradescope submission
//    cout<<"Please enter height in inches:"<<endl;
    cin>>heightImperial;

    weightMetric = weightImperial * lbToKGFactor;

    heightMetric = heightImperial * inchToMeterFactor;

    BMI = weightMetric / (heightMetric * heightMetric);

    cout<<fixed<<setprecision(2)<<"BMI is: "<<BMI;

    return 0;
}
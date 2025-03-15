#include <iostream>
using namespace std;

int main(){
    int numOfStudents;
    int count;
    int curr, sum;
    double average;

    cout<<"Please enter number of students in the class:"<<endl;
    cin>>numOfStudents;

    cout<<"Enter the students' grades (separate by a space)"<<endl; 
    sum = 0;
    for (count = 1; count <= numOfStudents; count++){
        cin>>curr;
        sum += curr;
    }

    average = (double)sum / (double)numOfStudents;

    cout<<"The average is "<<average<<endl;

    return 0;
}
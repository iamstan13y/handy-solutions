#include <iostream>
#include <string>

using namespace std;

struct Student{
string name;
string diploma;
string degreeClass;
};

int main(){

    struct Student newStudent;
    int grade;

    cout<<"Enter Your Name, Diploma and Grade:"<<endl;
    cin>>newStudent.name;
    cin>>newStudent.diploma;
    cin>>grade;

    if (grade>=75 && grade<=100){
        newStudent.degreeClass="Distinction";

    } else if (grade>=60 && grade<75){
        newStudent.degreeClass="Merit";

    } else if (grade>=50 && grade<60){
        newStudent.degreeClass="Pass";
    }

    cout<<"****YOUR RESULTS****"<<endl;
    cout<<"NAME: "<<newStudent.name<<endl;
    cout<<"DIPLOMA: "<<newStudent.diploma<<endl;
    cout<<"DEGREE CLASS: "<<newStudent.degreeClass<<endl;

    return 0;
}
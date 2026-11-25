//Name: Michael Mutembei
//RegNo: CT101/G/26579/25

/*Stutend fee management system (classes and objects)*/

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
public:
    string studName;
    int admNo;
    float feeBal;

    /*member functions*/
    void inputStudent(){
        cout<<"Enter student name: ";
        getline(cin, studName);

        cout<<"Enter student admission number: ";
        cin>>admNo;

        cout<<"Enter fee balance: \nKsh ";
        cin>>feeBal;
    }

    void makePayment(){
        double amouNt;//stores the fee to be paid

        cout<<"Enter amount to pay. \nKsh ";
        cin>>amouNt;

        feeBal = feeBal-amouNt; // calculates the fee balance
    }

    void displayStatus(){
        cout<<"Student name "<<studName<<endl;
        cout<<"Student admission number"<<admNo<<endl;
        cout<<"Fee balance is Ksh:"<<feeBal<<endl;
    }
};


int main(){
    Student s1;             //object
    s1.inputStudent();
    s1.makePayment();
    s1.displayStatus();

    return 0; //program exits successfully
}
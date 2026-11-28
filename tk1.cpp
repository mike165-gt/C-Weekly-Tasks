//Name: Michael Mutembei
//RegNo:CT101/G/26579/25

#include<iostream> //library for input/output
#include<string>//library for handling text
using namespace std; //avoids uusing std everytime

/*Basse class*/
class Person
{
public:
    /*attributes*/
    string naMe;
    int aGe;

    /*member function*/
    void displayPerson(){
        cout<<"Name: "<<naMe<<endl;
        cout<<"Age: "<<aGe<<endl;
    }

};

    /*Derived class*/
class Student : public Person
{
    public:

    int admissionNo;
    string claSS;

    /*Member function*/
    void displayStudent(){
        displayPerson(); //inherited function
        cout<<"Admission number: "<<admissionNo<<endl;
        cout<<"Class: "<<claSS<<endl;
    }        
};

    int main(){
        Student s1;  //object
        
        /*Prompt to enter details*/
        cout<<"Enter name: ";
        getline(cin, s1.naMe);

        cout<<"Enter age: ";
        cin>>s1.aGe;

        cout<<"Enter admission number:";
        cin>>s1.admissionNo;

        cout<<"Enter class:";
        cin.ignore();  //Removes enter buffer
        getline(cin, s1.claSS);

        /*DIsplay results*/
        cout<<"\n=====Students details======\n";
        s1.displayStudent();


    return 0;// program exits successsfully
    }
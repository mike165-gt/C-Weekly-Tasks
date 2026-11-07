//Name: Michael Mutembei
//Reg.No: CT101/G/26579/25

/*GRADING SYSTEM (if-else ladder)*/

#include<iostream> //include input/output stream library
#include<string> //include stream library for handling text
using namespace std; //using standard namespace to avoid using std

int main(){
    string StudName; //variable to store the student name
    int ExamMks; //variable to store the exam marks
    char Grade;

    /*Prompting the user to enter details and also stores them*/
    cout<< "Enter your name below" <<endl; //prompts user to enter student name
    getline(cin, StudName); //store the student name

    cout<< "Enter the marks scored." <<endl; //user enters the marks
    cin>>ExamMks; //marks stored

    /*Determing the grade using if-else ladder*/

    if(ExamMks >= 70 && ExamMks <= 100){
        Grade = 'A';
    } else if(ExamMks >= 60 && ExamMks < 70){
        Grade = 'B';
    } else if(ExamMks >= 50 && ExamMks < 60){
        Grade ='C';
    } else if(ExamMks >= 40 && ExamMks < 50){
        Grade ='D';
    } else{
        Grade = 'E';
    }


    /*Displaying the results*/
    cout<<"********RESULTS********"<<endl;
    cout<<"Student name: "<<StudName<<endl;
    cout<<"Marks scored: "<<ExamMks<<endl;
    cout<<"Grade gotten: "<<Grade<<endl;

    return 0; //program exited succeffully
}

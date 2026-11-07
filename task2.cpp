//Name: Michael Mutembei
//RegNo: CT101/G/26579/25

/*ADMISSION DECISION (Nested if)*/

#include<iostream> //Includes input/output stream library
#include<string> //include library for handling text
using namespace std; //using standard namespace to avoid using std

int main(){
    string StudName, decision; //variable to store student name and admission decision
    int Age = 0, Examscore = 0; //variable to store student age and exam score

    /*Prompting the user to enter the required details*/
    cout<<"Enter the student name."<<endl;
    getline(cin, StudName);

    cout<<"Enter the student age."<<endl;
    cin>>Age;

    cout<<"Enter the student's exam score."<<endl;
    cin>>Examscore;

    /*nested if statements to determine admission*/
    if(Age >= 18){
        if(Examscore >= 50){
            decision = "Admitted";
        }else{
            decision = "Not Admitted: Low Score";
        }
    }else{
        decision = "Not Admitted: Underage";
    }

    /*Displaying the admission decision*/
    cout<<"********ADMISSION DECISION********"<<endl;
    cout<<"Name: "<<StudName<<endl;
    cout<<"Age: "<<Age<<endl;
    cout<<"Exam Score: "<<Examscore<<endl;
    cout<<"Decision: "<<decision<<endl;

    return 0; //program runs successfully
}
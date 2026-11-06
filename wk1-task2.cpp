//Name: Michael Mutembei
//RegNo: CT101/G/26579/25

/*DRIVING TEST RESULT EVALUATION SYSTEM*/

#include<iostream> //include input/output stream library
#include<string.h> //include stream library for handling text
using namespace std; // use standaard namespace to avoid using std

int main(){

    string StudName; //stores the full student name
    float AverageScore; //stores the average score
    float TheoryMarks, PracMarks; //stores the theory marks scored
    char grade; //stores the grade gotten

    /*prompting user to input the details*/
    cout<<"Enter student name: " <<endl;
    getline(cin, StudName);

    cout<<"Enter the theory test marks scored: " <<endl;
    cin>>TheoryMarks;

    cout<< "Enter the Practical test marks scored: " <<endl;
    cin>>PracMarks;

    AverageScore = (TheoryMarks + PracMarks)/2; //calcullates the average score

    /*Displays the results*/
    cout<<"\n========= Evaluation results =========="<<endl;
    cout<<"Student Name: "<<StudName<<endl;
    cout<<"Theory marks scored: "<<TheoryMarks<<endl;
    cout<<"Practical Marks scored: "<<PracMarks<<endl;
    cout<<"Average marks scored: "<<AverageScore<<endl;
    
    /*Checks if the score is pass or fail*/
    if(AverageScore >= 50){
        cout<< "Result: PASSED"<<endl;
    } else {
        cout<<"Result: FAILED"<<endl;
    }

    cout<<"\n----------END----------\n"<<endl;
    return 0; //when program is executed successfully
}

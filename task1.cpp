//Name: MICHAEL MUTEMBEI
//RegNo: CT101/G/26579/25

/*EMPLOYEE BONUS SYSTEM (for loop)*/

#include<iostream> // library for input and output
#include<string> // library for handling text
using namespace std; // using standard namespace to avoid using std

int main(){
    string emPname; //stores  employee name
    double basicSal = 0, bonus = 0, TotalSal = 0; //stores the basic salary, bonus and total salary

    /*FOR LOOP*/
    for (int i = 1; i < 6; i++)
    {
        cout<<"\n---Employee "<< i << "---" <<endl;

        cout<<"Enter employee name. \n";
        cin.ignore(); //clear buffer before getline
        getline(cin, emPname);

        cout<<"Enter basic salary. \n Ksh:";
        cin>>basicSal;

        /*BONUS CALCULATON*/
        bonus = 0.05 * basicSal;

        /*TOTAL SAALARY*/
        TotalSal = basicSal + bonus;

        /*REPORT DISPLAY*/
        cout<<"\n=====EMPLOYEE REPORT=====\n";
        cout<<"Employee name: "<<emPname<<endl;
        cout<<"Basic salary earned. ksh: "<<basicSal<<endl;
        cout<<"Bonus earned. Ksh: "<<bonus<<endl;
        cout<<"Total salary earned. Ksh: "<<TotalSal<<endl;
    }
    
    return 0; //program ran successfully
}
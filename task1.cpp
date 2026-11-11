//Name: Michael Mutembei
//RegNo: CT101/G/26579/25

/*PAYROLL SYSTEM USING FUNCTIONS*/

#include<iostream> //includes library for input and output
#include<string> //includes library for handling text
using namespace std; //using standard namespace to avoid using std

/*Function prototypes*/
 void getEmployeeDetails(double &basicSal, double &OverTimeHrs, string &empNam, double &ratePerhr); //uses & to pass by reference not just a copy
 double calculateOvertimePay(double OverTimeHrs, double ratePerhr);
 double calculateNetSalary(double basicSal, double overTimePy);
 void displayPayslip(double basicSal, double OverTimeHrs, string empNam, double ratePerhr, double OverTimePay, double netSal);

int main(){
    double basicSal, OverTimeHrs, ratePerhr, overTimePy, netSal;
    string empNam;

    getEmployeeDetails(basicSal, OverTimeHrs, empNam, ratePerhr);
    overTimePy = calculateOvertimePay(OverTimeHrs, ratePerhr);
    netSal = calculateNetSalary(basicSal, overTimePy);
    displayPayslip(basicSal, OverTimeHrs, empNam, ratePerhr, overTimePy, netSal);    

    return 0; //program exited successfully
}

/*Function Defination*/
 void getEmployeeDetails(double &basicSal, double &OverTimeHrs, string &empName, double &ratePerhr){
     cout<<"Enter employee Name \n";
     getline(cin, empName);

     cout<<"Enter the basic salary earned. \nKsh";
     cin>>basicSal;

     cout<<"Enter overtime hours worked.";
     cin>>OverTimeHrs;

     cout<<"Enter rate per hour";
     cin>>ratePerhr;
 }

 double calculateOvertimePay(double OverTimeHrs, double ratePerhr){
    return OverTimeHrs * ratePerhr; //Calculaates the over time pay
 }

 double calculateNetSalary(double basicSal, double overTimePy){
    return basicSal + overTimePy; //Calculates the net salary
 }

 void  displayPayslip(double basicSal, double OverTimeHrs, string empNam, double ratePerhr, double OverTimePay, double netSal){
    cout<<"/n---------PAYSLIP---------\n";
    cout<<"Employee name: "<<empNam<<endl;
    cout<<"Basic salary: Ksh"<<basicSal<<endl;
    cout<<"Overtime hours: "<<OverTimeHrs<<endl;
    cout<<"Rate per hour: "<<ratePerhr<<endl;
    cout<<"Overtime pay: "<<OverTimePay<<endl;
    cout<<"Net salary: Ksh"<<netSal<<endl;
  }
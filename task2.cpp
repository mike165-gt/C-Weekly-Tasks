//Name: Michael Mutembei
//RegNo: CT101/G/26579/25

/*WATER BILLING SYSTEM*/
#include<iostream> //includes librsry for input/output
#include<string> //includes library for handling text
using namespace std; //using standard namespace to avoid using std

/*Function prototypes*/
void getCustomerDetails(string &custName,double &unitsCons); //uses & to pass by reference
double calculateBill(double unitsCons, double ratePerunit);
double applyDiscount(double waterBill, double unitsCons);
void displayBill(string custName, double unitsCons, double waterBill, double disC, double totalAmt );

int main(){
    /*Declaring variables*/
    string custName;
    double unitsCons, waterBill, disC, totalAmt;
    double ratePerunit = 50; // 1 unit is  Ksh50

    /*Clling functions*/
    getCustomerDetails(custName,unitsCons);
    waterBill = calculateBill(unitsCons, ratePerunit);
    disC = applyDiscount(waterBill, unitsCons);
    totalAmt = waterBill - disC; //calculates the total bill
    displayBill( custName, unitsCons, waterBill, disC, totalAmt ); //shows the bill
    
    return 0; //program runs successfully
}

/*Function Defination*/
void getCustomerDetails(string &custName,double &unitsCons){
    cout<<"Enter the customer name: ";
    getline(cin, custName);

    cout<<"Enter the units consumed by the customer: ";
    cin>>unitsCons;

}

double calculateBill(double unitsCons, double ratePerunit){
    return unitsCons * ratePerunit;
}

double applyDiscount(double waterBill, double unitsCons){
    if(unitsCons > 100){
        return waterBill * 0.1;
    }else{
        return 0;
    }
    
}

void displayBill(string custName, double unitsCons, double waterBill, double disC, double totalAmt ){
    cout<<"\n========YOUR BILL========\n";
    cout<<"Name: "<<custName<<endl;
    cout<<"Units consumed: "<<unitsCons<<endl;
    cout<<"Water bill: Ksh"<<waterBill<<endl;
    cout<<"Discount given: Ksh"<<disC<<endl;
    cout<<"Total amount: Ksh"<<totalAmt<<endl;
}
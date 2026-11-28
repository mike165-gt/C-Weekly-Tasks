//Name: Michael Mutembei
//RegNo: CT101/G/26579/25

/*Bank account system*/

#include<iostream>//input/output library
#include<string.h>//library for handling text
using namespace std; //to avoid usong std every time

class BankAccount
{
public:
    string accountholdername;
    int accountnumber;
    double accountbal;

    /*Contructor*/
    BankAccount(string naMe, int nuMber, double acBal){  //temporery couriors for the data members
        accountholdername = naMe;
        accountnumber = nuMber;
        accountbal = acBal;

        cout<<"Accoutn successfully created \n";
    }

    /*member function*/
    void displayAccount(){
        cout<<"-----Account Details----\n";
        cout<<"Account holder is: "<<accountholdername<<endl;
        cout<<"Holder's number: "<<accountnumber<<endl;
        cout<<"Balance: ksh "<<accountbal<<endl;

    }

    /*destructor*/
    ~BankAccount(){
        cout<<"Account successfully closed.";
    }
};

int main(){
    BankAccount Ac1("Mike Lee", 26579, 2500); //object
    Ac1.displayAccount();

    return 0; //program runs successfully
}

//Name: Michael mutembei
//RegNo: CT101/G/26579/25

/*Savings Withdrawal System (while loop)*/

#include<iostream>
using namespace std;

int main(){
    double acBal, withDamt;

    cout<<"Enter account balance: \n Ksh";
    cin>>acBal;

    /*while loop to withdraw if withrawal >= balance */
    while (acBal > 0)
    {
        cout<<"Enter withdraw amount. Or 0 to exit.\nKsh:";
        cin>>withDamt;

        if (withDamt == 0)
        {
            cout<<"Withdraw cancelled by user.";
            break;
        }
        /*Stops when withrawal is greater then balance*/
        if (withDamt > acBal)
        {
            cout<<"Insufficient amount. Your balance is \nKsh"<<acBal<<endl;
            break;
        }
        
        /*Deducts amount from balance*/
        acBal = acBal - withDamt;

        /*Displaying balance*/
        cout<<"Withdraw successful. Remaining ballance is\nKsh:"<<acBal<<endl;

        if (acBal == 0)
        {
            cout<<"Balance is zero. Can not withdraw more.";
        }
    }

    cout<<"Final balance"<<acBal<<endl;// shows final balance after withdrawal

    return 0;//program run successfullly
}
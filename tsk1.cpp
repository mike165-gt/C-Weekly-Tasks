//Name: Michael Mutembei
//RegNo: CT101/G/26579/25

/*1D Array – Weekly Revenue Tracker*/

#include<iostream> //standard library for input and output
using namespace std; //to avooid using std every line

int main(){
    double Revenue[7], total = 0, aveRage; //stores daily revenue, total revenue and average revenue
    int i;

    /*entering number revenue for each day*/
    cout<<"Enter revenue for seven days.";
    for (i = 0; i < 7; i++)
    {
        cout<<"\nKsh ";
        cin>>Revenue[i];
        total = total + Revenue[i];
    }
    
    aveRage = total/7; //calculates average daily revenue

    /*displaying results*/
    cout<<"Total weekly revenue is: \nKsh "<<total<<endl;
    cout<<"Daily revennue is; \nKsh "<<aveRage<<endl;

    return 0; //program ran successfully
}
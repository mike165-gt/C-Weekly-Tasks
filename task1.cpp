//Name: Michael Mutembei
//RegNo: CT101/G/26579/25

/*MOBILE PHONE SALES RECEIPT SYSTEM*/

#include<iostream> //include input/output stream library
#include<string.h> //include stream library for handling text
using namespace std; // use standaard namespace to avoid using std

int main(){
    string Phonemodel, customername; //stores customer name and device model
    int quantityBought; //stores the number of devices sold
    float pricePerphone, TotalSales; //stores the total price of the devices sold and total sales made

    /*prompting user to input the details*/
    cout<<"Enter customer name"<< endl;
    getline(cin, customername); //getline accepts the full name with the spacing

    cout<<"Enter phone  bought"<< endl;
    getline(cin, Phonemodel); // accepts phone model name
     
    cout<<"Enter quantity purchased"<< endl;
    cin>>quantityBought; //accepts quantity of devices bought

    cout<<"Enter the price of the device bought"<< endl;
    cin>>pricePerphone; //accepts the price of the device

    /*Calculates total sales using the formula*/
    TotalSales = quantityBought * pricePerphone;

    /*Displaying receipt*/
    cout<< "\n =========== MOBILE PHONE SALES RECEIPT ========== \n"<< endl;
    cout<< "Customer name: " << customername << endl; //displays customer name
    cout<< "Phone model: "<<Phonemodel<<endl; //displays phone model
    cout<< "Quantity bought: "<<quantityBought<<endl; //displays number of phones bought
    cout<< "Price per phone: Ksh "<<pricePerphone<<endl; //displays phone price
    cout<< "Total sales amount: Ksh "<<TotalSales<<endl; //displays total sales made

    return 0; //means program ended successfully
}
//Name: michael mutembei
//RegNo: CT101/G/26579/25

/*Vehicle system*/

#include<iostream> //librery for input/output
#include<string>//library for handing text
using namespace std;

class Vehicle
{
public:
    /*Attributes*/
    string BraNd;
    int yearofMan;

    /*Member functon*/
    void displayVehicle(){
        cout<<"Vehicle brand "<<BraNd<<endl;
        cout<<"Year of manufacture "<<yearofMan<<endl;
    }
};

    /*Derived class car*/
class Car : public Vehicle
{
public:
    int NoofDrs, engineCap;

    /*member function*/
    void displayCar(){
        displayVehicle();//inherited function
        cout<<"Number of doors "<<NoofDrs<<endl;
        cout<<"Engine capacity "<<engineCap<<endl;
    }
};

int main(){
    Car c1; //object

    /*Entering details*/
    cout<<"Enter vehicle brand ";
    getline(cin, c1.BraNd);

    cout<<"Enter year of manufacture ";
    cin>>c1.yearofMan;

    cout<<"Enter the number of doors ";
    cin>>c1.NoofDrs;

    cout<<"Enter engine capacity ";
    cin>>c1.engineCap;

    /*Display details*/
    cout<<"\n----car details----\n";
    c1.displayCar();

    return 0;//program run successfully
}

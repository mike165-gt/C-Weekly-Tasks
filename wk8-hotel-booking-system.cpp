//Name: Michael Mutembei
//RegNo: CT101/G/26579/25

/*Hotel room booking system*/

#include<iostream>//library for input/output
#include<string>//library for handling text
using namespace std; // stsndard namespace to avoid using std

/*class*/
class RoomBooking
{
public:
    string guestName;
    int roomNumber;
    int numberOfdaysBooked;

    RoomBooking(string naMe, int RmNo, int daYsBookd){  //temporary couriers
        guestName = naMe;
        roomNumber = RmNo;
        numberOfdaysBooked = daYsBookd;

        cout<<"Roomed booking confirmed\n";
    }

    /*Member function for booking details*/
    void displayBooking(){
        cout<<"----Booking details----\n";
        cout<<"Guest name is: "<<guestName<<endl;
        cout<<"Room number booked is: "<<roomNumber<<endl;
        cout<<"Number of days booked = "<<numberOfdaysBooked<<endl;
    }

    ~RoomBooking(){
        cout<<"Book ended, room released \n";
    }
};


int main(){
    RoomBooking Rm1("Mike Cole", 12, 30);
    Rm1.displayBooking();

    return 0;// program run successfully
}

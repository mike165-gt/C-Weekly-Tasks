//name: Michaael mutembei
//RegNo:CT101/G/26579/25

/*2-D Arr Room Occupancy(1 branch)*/

#include<iostream> //standard library for input and output
using namespace std; //avouds using std every time

int main(){

    int occupancy[5][10];
    int i, j, occuPied, vacaNt;

    /*User to enter the room occupied*/
    for (i = 0; i < 5; i++)
    {
        cout<<"Floor number: "<<i + 1<<endl;
        for (j = 0; j < 10; j++)
        {
            cout<<"Enter room number(1-10) 1=occupied & 0=vacant."<<j + 1<<endl;
            cin>>occupancy[i][j];
        }
        
    }
    
    
    /*Display number of occupied per floo*/

       cout << "Floor  Occupied  Vacant" << endl;
    for (i = 0; i < 5; i++) {
        occuPied = 0;
        vacaNt = 0;

        for (j = 0; j < 10; j++) {
            if (occupancy[i][j] == 1) {
                occuPied = occuPied + 1;
            } else {
                vacaNt = vacaNt + 1;
            }
        }

        cout << "Floor " << i + 1 << "     " << occuPied << "         " << vacaNt << endl;
    }
    
    return 0; //program exits successsfully
}

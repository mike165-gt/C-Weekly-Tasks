//Name: Michel Mutembei
//RegNo: CT101/G/26579/25

/*3-D Array Multiple Branches*/

#include<iostream> //standard input ortout lib
#include<cstdlib> //gives the rand and sran()
#include<ctime> //gives current time for randomizing(the sedd)
using namespace std;

int main(){

    int chain[3][5][10], i, j, k, totalOCcupied = 0;
    srand(time(0)); //assings random ocuppncy

    for (i = 0; i < 3; i++)
    {
       for (j = 0; j < 5; j++)
       {
        for (k = 0; k < 10; k++)
        {
            chain[i][j][k] = rand() % 2; //assigns random number by dividing a number by two and takes the remainder
        }
        
       }
       
    }

    /*Calculation of occupied tooms*/
    for (i = 0; i < 3; i++)
    {
       for (j = 0; j < 5; j++)
       {
        for (k = 0; k < 10; k++)
        {
            if (chain[i][j][k]==1)
            {
                totalOCcupied = totalOCcupied + 1;
            }
        }
        
       }
       
    }

    /*Displaying number of room occupied*/
    cout<<"Ocuppied rooms: "<<totalOCcupied<<endl;

    return 0;//program run successfullly

}
//Name: Michael Mutembei
//RegNo: CT101/G/26579/25

/*Password Verification System (do-while loop) */

#include<iostream>//handling input/ooutput
#include<string>//handling text
using namespace std;//standard namespace to avoid using std


int main(){
    string correctuserName = "admin";
    string correctpassWord = "1234";

    string userName, passWord;

    /*do while loop*/
    do
    {
        cout<<"Enter username. \n";
        cin>>userName;

        cout<<"Enter password. \n";
        cin>>passWord;
        
        /*checks input*/
        if (userName == correctuserName && passWord == correctpassWord)
        {
            cout<<"Access Granted. \n";
        }else{
            cout<<"Incorrect credentials, try again. \n";
        }
        
        
    } while (userName != correctuserName || passWord != correctpassWord);
    
    cout<<userName <<" welcome to your system. \n";
    return 0;//program exits successfully
}

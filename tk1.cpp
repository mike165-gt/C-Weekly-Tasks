//Name: Michael Mutembei
//RegNo: CT101/G/26579/25

/*Library book management system (classes and objects)*/

#include<iostream> // a library for input/output 
#include<string.h>// a libraru for handling text
using namespace std; //avoids using std always

class Book
{
public:
    string BkTitle, autHor; //storing title of the books and the author
    int CopiesAvailable;//stores number of book copies available

    /*the member functions*/
    void inputDetails(){
        cout <<"Enter the book title. ";
        getline(cin, BkTitle);

        cout<<"enter the author of the book. ";
        getline(cin, autHor);

        cout<<"Enter the number of book copies available";
        cin>>CopiesAvailable;
    }

    int borrowBook(){
        if (CopiesAvailable > 0)
        {
            CopiesAvailable = CopiesAvailable - 1; //reduces copies available by 1
            cout<<"Book has been borowwed.\n";
            return 1;
        }else{
            cout<<"Book is not available \n";
            return 0; //failed to borrow book exit program.
        }
    }

    void displayDetails(){
        cout<<"Book title is "<<BkTitle<<endl;
        cout<<"Auther of the book is "<<autHor<<endl;
        cout<<"Book copies available "<<CopiesAvailable<<endl;
    }
};


int main(){
    Book b1;                //object
    b1.inputDetails();
    b1.borrowBook();
    b1.displayDetails();

    return 0; //program run successfully
}
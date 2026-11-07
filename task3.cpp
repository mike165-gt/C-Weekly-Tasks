//Name: Michael Mutembei
//RegNo: CT101/G/26579/25

/*SIMPLE CALCULATOR (switch statement)*/

#include<iostream> //Includes input/output stream library
#include<math.h> //includes math library for handling maths expressions
using namespace std; //using standard namespace to avoid using std;

int main(){

    double Num1 = 0, Num2 = 0, result = 0; // Variable for storing two numbers and the result
    char op; //stores operator

    //Prompting the user to enter the values

    cout<<"Enter the first number: "<<endl;
    cin>>Num1;

    cout<<"Enter the operator (+, -, * or /)";
    cin>>op;

    cout<<"Enter the second number: ";
    cin>>Num2;

    /*Using switch to perform the given operation*/

    switch (op) //checks whats inside op
    {
    case '+':
        result = Num1 + Num2; //Addition
        break; //stops and exits switch
    case '-':
        result = Num1 - Num2; //subtraction
        break;
    case '*':
        result = Num1 * Num2; //multiplication
        break;
    case '/':
        if (Num2 != 0) //check division by 0 is handled
        {
            result = Num1 / Num2;
        }else{
            cout<<"Error: cant divide by 0"; //show error message
            return 0;
        }
        break;
        
    default:
        cout<<"Error: invalid operator";
        return 0; //stops prigram
    }

    /*Displaying the results*/

    cout<<"\n********RESULT********\n";
    cout<<"Result = "<<Num1<<op<<Num2<< "=" <<result; 

    return 0; //Code exited successfully
}
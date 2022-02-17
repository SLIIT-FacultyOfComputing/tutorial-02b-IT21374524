#include <iostream>
using namespace std ; 

int main()
{
    int no;             //varriable declaration
    long fac;         

    cout << "Enter a Number : ";
    cin >> no;        // getting user input

    fac = 1;
    for (int r=no; r >= 1; r--) 
    {
        fac = fac * r;        //calculation
    }

    cout << "Factorial of " << no << " is " << fac << endl ;  //printing the output
    
}


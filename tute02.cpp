#include <iostream>
using namespace std ;

int main()
{
   double salary, netSalary;        //variable declaration
   int etype, otHrs, otRate;
   cout << "Enter Employee Type : ";
   cin>> etype ;                   //getting user inputs
   cout << "Enter Salary  : ";
   cin >> salary ;
   cout << "Enter OtHrs : " ;
   cin >> otHrs; 
   
   switch (etype) {
      case 1 :
          otRate = 1000;
          break;
      case 2 :                   //deciding the OT rate
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }


   netSalary = salary + otHrs* otRate;    //calculation
   cout << "Net Salary is " <<  netSalary <<endl;     //pinting the out put
  

}


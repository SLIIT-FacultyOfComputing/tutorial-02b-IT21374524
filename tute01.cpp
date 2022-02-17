#include<iostream>
using namespace std;

int main()
{
  float cm , inches ;        // varriable declaration
  cout << "Enter the length in cm : " ;
  cin >> cm ;              //getting user inputs
  inches = cm/2.54 ;
  cout << "Length in inches is ";  //printing the outputs
  cout << inches <<endl;

}

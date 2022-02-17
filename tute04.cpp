#include <iostream>

long Factorial(int no);       //calling the functions
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r "; //getting user inputs
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}

long Factorial(int no)
{
  int fac , r ;
  
  fac=1;                       
  for ( r=no; r >= 1; r--) 
    {
        fac = fac * r; 
    }
    return fac ;
}

long nCr(int n, int r)
{
     return Factorial(n)/(Factorial(r)*Factorial(n-r)) ; 
}


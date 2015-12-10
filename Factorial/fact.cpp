//Paulo Costa
//11/17/2010
//Factorial
//Returns the factorial of an input integer using the recursive method.
//The correct representations of factorials are limited to 12! in 32-bit memory.

#include <iostream.h>

unsigned long int fact(int n){
   if (n<=0){
   return 1;
   }
return n*fact(n-1);
}

int main(void){
int n;
cout<<"Enter a number between 1 and 12: ";
cin>>n;
cout<<n<<"!= "<<fact(n);
}

//Paulo Costa
//10/1/2010
//Square Root Function
//Generate the square roots of the integers up to the number specified.

#include <iostream.h>
#include <math.h>

int main(void){
   int n;
   cin>>n;
   double a;
   a=0.;
   while (a<n){
   a=a+1;
   double b=sqrt(a);
   cout<<"Square root of "<<a<<" = "<<b<<endl;
   }
return 0;
}

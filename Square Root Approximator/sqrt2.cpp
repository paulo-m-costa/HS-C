//Paulo Costa
//10/9/2010
//Square Root Approximator
//Approximates the square root of an input value using the divide and
//average method.

#include <iostream.h>

double myroot(double c){
   double myroot=c;
   double a=1;
   double b=1;
   double x=0;
   double y=0;
   while (x<a||x>a)
   {
   y=x;
   x=a;
   b=myroot/a;
   a=(a+b)/2;
   }
   if (y<a+0.0000000000000000001||y>a-0.0000000000000000001){
   return a;
   }
return 0;
}

int main(void){
   double c;
   cin>>c;
   double e=myroot(c);
cout<<"Square root of "<<c<<" = "<<e;
return 0;
}

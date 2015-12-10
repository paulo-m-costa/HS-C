//Paulo Costa
//12/26/2010
//Power Computer
//Computes a specified power of a specified number.

#include <iostream.h>

long double power(long double n, int m){
if(m==0){
n=1;
}
if(m>0){
n=n*power(n, m-1);
}
if(m<0){
n=1/power(n, -m);
}
return n;
}

int main(void){
long double a;
int b;
cout<<"Enter the number you want to exponentiate: ";
cin>>a;
cout<<"Enter the power you want to raise the number to: ";
cin>>b;
cout<<a<<" to the power of "<<b<<" = "<<power(a, b)<<".";
return 0;
}

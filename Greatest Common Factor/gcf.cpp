//Paulo Costa
//11/16/2010
//GCF
//Computes the GCF of two input numbers using the Euclidean algorithm.

#include <iostream.h>

unsigned long int gcf(void){
unsigned long int a;
unsigned long int b;
unsigned long int c; 
unsigned long int r;
cout<<"Please enter the first number: ";
cin>>a;
cout<<"Please enter the second number: ";
cin>>b;
if(a<b){
c=b;
b=a;
a=c;
}
while (a>=b){
r=a%b;
a=b;
b=r;
   if(r==0){
   return a;
   }
}
return 0;
}

unsigned long int main(void){
cout<<"The greatest common factor is "<<gcf()<<".";
return 0;
}
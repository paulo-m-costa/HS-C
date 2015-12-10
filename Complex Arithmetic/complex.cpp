//Paulo Costa
//1/10/2011
//Complex Arithmetic
//Performs arithmetic operations on two input complex numbers.

#include <iostream.h>
#include <math.h>

struct compl{
   double r;
   double i;
};

compl operator +(compl a, compl b){
   compl s;
   s.r=a.r+b.r;
   s.i=a.i+b.i;
   return s;
}

compl operator -(compl a, compl b){
   compl d;
   d.r=a.r-b.r;
   d.i=a.i-b.i;
   return d;
}

compl operator *(compl a, compl b){
   compl p;
   p.r=(a.r*b.r)-(a.i*b.i);
   p.i=(a.r*b.i)+(a.i*b.r);
   return p;
}

compl operator /(compl a, compl b){
   compl q;
   q.r=((a.r*b.r)+(a.i*b.i))/((b.r*b.r)+(b.i*b.i));
   q.i=(-(a.r*b.i)+(a.i*b.r))/((b.r*b.r)+(b.i*b.i));
   return q;
}

compl average(compl a, compl b){
   compl avg;
   avg=a+b;
   avg.r=avg.r/2;
   avg.i=avg.i/2;
   return avg;
}

compl magnitude(compl a, compl b){
   compl mag;
   mag.r=sqrt((a.r*a.r)+(a.i*a.i));
   mag.i=sqrt((b.r*b.r)+(b.i*b.i));
   return mag;
}

int main(void){
   compl x;
   compl y;
   cout<<"Enter the real part of the first complex number: ";
   cin>>x.r;
   cout<<"Enter the imaginary part of the first complex number: ";
   cin>>x.i;
   cout<<"Enter the real part of the second complex number: ";
   cin>>y.r;
   cout<<"Enter the imaginary part of the second complex number: ";
   cin>>y.i;
   compl s=x+y;
   cout<<"The sum is: "<<s.r<<" + "<<s.i<<"i"<<'\n';
   compl d=x-y;
   cout<<"The difference is: "<<d.r<<" + "<<d.i<<"i"<<'\n';
   compl p=x*y;
   cout<<"The product is: "<<p.r<<" + "<<p.i<<"i"<<'\n';
   compl q=x/y;
   cout<<"The quotient is: "<<q.r<<" + "<<q.i<<"i"<<'\n';
   compl aver=average(x,y);
   cout<<"The average is: "<<aver.r<<" + "<<aver.i<<"i"<<'\n';
   compl magn=magnitude(x,y);
   cout<<"The magnitude of the first number is: "<<magn.r<<'\n'<<"The magnitude of the second number is: "<<magn.i<<'\n';
return 0;
}

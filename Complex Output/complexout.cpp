//Paulo Costa
//2/1/2011
//Complex Output
//Outputs an inputted complex number in standard mathematical form.

#include <iostream.h>
#include <math.h>

struct compl{
   double r;
   double i;
};

ostream &operator <<(ostream &o, compl a){
   if(a.r>0&&a.i>1){
      o<<a.r<<" + "<<a.i<<"i";
      return o;
   }
   if(a.r<0&&a.i>1){
      o<<a.r<<" + "<<a.i<<"i";
      return o;
   }
   if(a.r<0&&a.i<-1){
      o<<a.r<<" - "<<-a.i<<"i";
      return o;
   } 
   if(a.r>0&&a.i<-1){
      o<<a.r<<" - "<<-a.i<<"i";
      return o;
   } 
   if(a.r==0&&a.i==0){
      o<<"0";
      return o;
   }
   if(a.r!=0&&a.i==0){
      o<<a.r;
      return o;
   }  
   if(a.r==0&&a.i>1){
      o<<a.i<<"i";
      return o;
   }   
   if(a.r==0&&a.i<-1){
      o<<a.i<<"i";
      return o;
   }
   if(a.r!=0&&a.i==1){
      o<<a.r<<" + i";
      return o;
   }
   if(a.r==0&&a.i==1){
      o<<"i";
      return o;
   }
   if(a.r!=0&&a.i==-1){
      o<<a.r<<" - i";
      return o;
   }
   if(a.r==0&&a.i==-1){
      o<<"-i";
      return o;
   }
}

int main(void){
   compl x;
   cout<<"Enter the real part of the complex number: ";
   cin>>x.r;
   cout<<"Enter the imaginary part of the complex number: ";
   cin>>x.i;
   cout<<"This complex number is: "<<x;
return 0;
}
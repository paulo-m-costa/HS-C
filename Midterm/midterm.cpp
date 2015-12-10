//Paulo Costa
//2/1/2011
//Midterm
//Midterm assignment concerning triangular arithmetic.

#include <iostream.h>

int twenty(){
int n=0;
while(n<20){
   n=n+1;
   return n;
}
}

struct triangle{
int a;
int b;
int c;
};

int perimeter(triangle t){
int perimeter=t.a+t.b+t.c;
return perimeter;
}

bool possible(triangle t){
int d;
if(t.a>t.c){
   d=t.c;
   t.c=t.a;
   t.a=d;
}
if(t.b>t.c){
   d=t.c;
   t.c=t.b;
   t.b=d;
}
if(t.c<t.a+t.b){
   return true;
}
if(t.c>=t.a+t.b){
   return false;
}
}

bool right(triangle t){
int d;
if(t.a>t.c){
   d=t.c;
   t.c=t.a;
   t.a=d;
}
if(t.b>t.c){
   d=t.c;
   t.c=t.b;
   t.b=d;
}
if((t.c*t.c)==((t.a*t.a)+(t.b*t.b))){
   return true;
}
if((t.c*t.c)!=((t.a*t.a)+(t.b*t.b))){
   return false;
}
}

bool acute(triangle t){
int d;
if(t.a>t.c){
   d=t.c;
   t.c=t.a;
   t.a=d;
}
if(t.b>t.c){
   d=t.c;
   t.c=t.b;
   t.b=d;
}
if((t.c*t.c)<((t.a*t.a)+(t.b*t.b))){
   return true;
}
if((t.c*t.c)>=((t.a*t.a)+(t.b*t.b))){
   return false;
}
}

bool obtuse(triangle t){
if(right(t)==false&&acute(t)==false){
   return true;
}
if(right(t)==true||acute(t)==true){
   return false;
}
}
   
int main(){
   triangle t;
   cout<<"Enter the length of the first side of the triangle: ";
   cin>>t.a;
   cout<<"Enter the length of the second side of the triangle: ";
   cin>>t.b;
   cout<<"Enter the length of the third side of the triangle: ";
   cin>>t.c;
   if(possible(t)==true){
     cout<<"The triangle is possible."<<'\n';
     cout<<"The perimeter of the triangle is "<<perimeter(t)<<"."<<'\n';
        if(right(t)==true){
        cout<<"The triangle is a right triangle."<<'\n';
        }
        if(acute(t)==true){
        cout<<"The triangle is an acute triangle."<<'\n';
        }
        if(obtuse(t)==true){
        cout<<"The triangle is an obtuse triangle."<<'\n';
        }
   }
   if(possible(t)==false){
     cout<<"The triangle is not possible."<<'\n';
   }
return 0;
}
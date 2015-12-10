//Paulo Costa
//12/6/2010
//String Length
//Returns the length of an inputted string of characters.

#include <iostream.h>

int getit(char s[]){
int a=0;
int b=1;
int c=0;
   while(b!='\0'){
      b=s[a];
      a=a+1;
         if(b!='\0'){
         c=c+1;
         }
      }
   return c;
}

int main(void){
   char s[500];
   cout<<"Input the character string (up to 500 characters): "<<'\n';
   cin>>s;
   int d=getit(s);
   cout<<"The character string is "<<d<<" characters long.";
   return 0;
}


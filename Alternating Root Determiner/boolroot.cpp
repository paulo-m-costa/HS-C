//Paulo Costa
//10/16/2010
//Alternating Root Determiner
//Determines whether or not the square root of an input integer alternates
//when rounded to the nearest integer using the divide and average method.

#include <iostream.h>

bool boolroot(int c){
        int boolroot=c;
        int a=1;
	int x=1;
	int b=0;
        int y=0;
        while(b<a||b>a)
	{
                y=b;
                b=a;
                x=boolroot/a;
                a=(a+x)/2;
                if(y==a)
	{
		return false;
                
	}
        }
        if(b==a)
		{
		return true;
	}
}

int main(void){
	int c;
        cin>>c;
        if(boolroot(c)==true)
		{
                        cout<<"The solution is constant";
	}
        if(boolroot(c)==false)
		{
                        cout<<"The solution alternates";
	}
}

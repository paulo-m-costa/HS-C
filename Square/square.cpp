//Paulo Costa
//9/17/2010
//Square Function
//Generates the squares of integers up to the number specified.

#include <iostream.h>

int square(int n)
  {
    return n*n;
  }

int main(void){
  int n;
  cin>>n;
  int i=1;
  while (i<=n){
  cout<<i<<" squared = "<<square(i)<<"\n";
    i=i+1;
  }
  return 0;
}

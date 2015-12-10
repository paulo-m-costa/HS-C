//Paulo Costa
//12/23/2010
//Sieve Of Eratosthenes
//Uses the Sieve Of Eratosthenes to generate prime numbers up to a specified number.


#include <iostream.h>
#include <iomanip>

const int arraysize=10000000; //maximum number.
int primes[arraysize+1];

int main(){
    int n;
    cout<<"What number would you like to generate primes up to? (Maximum of "<<arraysize<<")"<<'\n';
    cin>>n;
    cout<<"Prime numbers up to "<<n<<":"<<'\n';
    primes[0]=primes[1]=1; //eliminates 0 and 1.
    for(int i=4;i<=n;i+=2){ //eliminates even numbers other than 2.
    primes[i]=1;
    }
    for(int i=3;i*i<=n;i+=2)
    {
        if(primes[i]==0)
        {
            for(int j=i*i;j<=n;j+=i) //eliminates all multiples of odd numbers greater than or equal to their squares.
                primes[j]=1;
        }
    }
    int numprimes=0;
    for(int i=0;i<=n;i++)
         if(primes[i]==0){
            cout<< setw(6) << i <<" "; //formats column width.
            numprimes++; //counts the number of generated primes.
            if(numprimes%10 == 0){
               cout <<'\n'; 
            }//restricts the number per row.     
         }
    cout<<'\n'<<"The total number of primes is "<<numprimes<<".";             
    return 0;
}
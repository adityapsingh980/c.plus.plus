#include<iostream>
using namespace std;

int main() {
    //enter number from 1 to n //
    /*int n;
    cout<<"enter the number till it has to be printed from 1: " ;
    cin>>n;
    int i=1;
    while(i<=n){
    cout <<i <<" " <<endl;
    i=i+1;
    }
    */
    
    //Add numbers from 1 to n //
/*
    int n,sum=0;
    cout<<"enter the number till it has to be added from 1: " ;
    cin>>n;
    int i=1;
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
    cout <<sum<<" " <<endl;
    }
    */

   //add even numbers from 1 to n//
/*
int n, sum=0;
cout<<"enter the number: ";
cin>>n;

int i=2;

while(i<=n){
    sum=sum+i;
    i=i+2;
}
cout<< "sum of even numbers :" <<sum;
}
*/

//Check number is prime or not//

int n;
cout<<"enter the number to be checked:  ";
cin>>n;

int i=2;

while (i<n)
{
   if(n%i==0){
   cout<< i <<" not a prime number" <<endl;
   }
   else (n%i==1)
   {
    cout <<i <<" is a prime number" <<endl;
}
i=i=1;
} 
}
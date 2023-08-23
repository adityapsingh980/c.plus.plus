#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number till we want fibonacci series: ";
    cin>>n;
    int a=0, b=1;
    cout<< a <<" " << b <<" ";
    for(int i=1; i<=n; i++)
{
    int nextNum = a+b;
    cout<< nextNum <<" ";
    a=b;
    b=nextNum;
}
}
#include<iostream>
using namespace std;
int main (){
    int amount;
    cout<<"Enter the amount: ";
    cin>>amount;
    int num;
    cout<<"currency counting you want then type 1: ";
    cin>>num;
    switch(num){
        case 1: cout<<"The number of 100 currency is :" <<amount/100 <<endl;
        amount=amount%100;
        case 2: cout<<"The number of 50 currency is :" <<amount/50 <<endl;
        amount=amount%50;
         case 3: cout<<"The number of 20 currency is :" <<amount/20 <<endl;
        amount=amount%20;
         case 4: cout<<"The number of 10 currency is :" <<amount/10 <<endl;
        amount=amount%10;
         case 5: cout<<"The number of 1currency is :" <<amount/1 <<endl;
        amount=amount%1;
    }
}
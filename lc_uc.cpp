#include<iostream>
using namespace std;

int main() {
char ch;
cout<<"enter the character" <<endl;
cin>>ch;
    if (ch>=65&&ch<=90)
    cout<<"It is uppercase"<<endl;
else if(ch>=97&&ch<=122)
cout<< "It is lowercase" <<endl;
else if(ch>=48&&ch<=57)
cout<<"It is numeric" <<endl;
else
cout<<"It is special character";
}
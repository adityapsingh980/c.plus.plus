#include<iostream>
using namespace std;

int main() {
int a;

cout << "value of a is:" ;
cin >> a;



if  (a>0) {
    cout<<a <<" "  << "is positive" << endl;
}
else if(a<0){
cout <<a <<" " <<"is negative" <<endl;
}
else
cout << "it is zero" << endl;

}
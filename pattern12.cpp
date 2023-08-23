/* pattern Q12

A B C 
D E F
G H I

*/

#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"enter the number" <<endl;
    cin>>n;
    char value='A';
    int i=1;
    while(i<=n)
    {
        int j=1;
        while (j<=n){
        cout << value << " ";
        value=value+1;
        j=j+1;
         }
         cout <<endl;
         i=i+1;
    }
}
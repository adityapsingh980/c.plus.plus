#include<bits/stdc++.h>
using namespace std;

int arr(int num[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+num[i];
    }
    return sum;
}

int main(){
    int size;
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"The sum of the elements of the array are: "<<arr(num,size) <<endl;
}

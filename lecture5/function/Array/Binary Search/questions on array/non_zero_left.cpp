#include<bits/stdc++.h>
using namespace std;

int zero(int arr[],int n){
    //non-zero element ko left side rakhne k liye
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
}
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={};
    int n=5;
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    cout<<"The numbers are"<<" ";
    for(int n=0;n<5;n++){
        cout<<arr[n]<<" ";
    }
    cout<<endl;
    zero(arr,n);
    printArray(arr,n);
}
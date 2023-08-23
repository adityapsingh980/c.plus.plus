#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


void insertion_Sort(int arr[], int n){
    for (int i=1; i<n; i++){
       int temp=arr[i];
       //note-> remember the j loop syntax.
       int j=i-1;
       for(;j>=0;j--){
        if(arr[j]>temp){
            arr[j+1]=arr[j];
        }
        else{
            break;
        }
       }
       arr[j+1]=temp;

    }
}
int main(){
    int arr[]={4,5,3,6,7};
    int n=5;
    insertion_Sort(arr,n);
    printArray(arr,n);
}
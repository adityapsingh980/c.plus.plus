#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swap_alter(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int brr[6]={1,2,3,4,5,6};
    swap_alter(arr,5);
    printArray(arr,5);
    swap_alter(brr,6);
    printArray(brr,6);
}

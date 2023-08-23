#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int sort(int arr[],int n){
    int i=0, j=n-1;
    while(i<j){
        while(arr[i]==0 && i<j){
            i++;
        }
        while(arr[j]==1 && i<j){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}
int main(){
    int arr[]={0,0,1,0,1,0,1,1};
    int n=8;
    sort(arr,8);
    printArray(arr,8);
}
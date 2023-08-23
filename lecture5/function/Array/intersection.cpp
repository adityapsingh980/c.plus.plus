#include<bits/stdc++.h>
using namespace std;
int intersection (int arr1[],int arr2[], int n, int m){
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={2,3,4};
    int n=5;
    int m=3;
    int answer=intersection(arr1,arr2,n,m);
  
}
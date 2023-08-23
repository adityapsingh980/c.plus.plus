#include<bits/stdc++.h>
using namespace std;
int pair_sum(int arr1[],int arr2[],int n, int m, int s){
    for(int i=0; i<n; i++){
        for(int j=0;j<m;j++){
        if(arr1[i]+arr2[j]==s){
            cout<<min(arr1[i],arr2[j])<<" ";
            cout<<max(arr1[i],arr2[j])<<" ";
        }
    }
    cout<<endl;
}
}
void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={4,3};
    pair_sum(arr1,arr2,5,2,5);
}

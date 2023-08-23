#include<bits/stdc++.h>
using namespace std;

int peakMountain(int arr[], int n){
    int start=0, end=n-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}
int main(){
    int arr[]={2,5,7,10,6,4};
    int n=6;
  
    int index=peakMountain(arr,n);
    cout<< index;
}
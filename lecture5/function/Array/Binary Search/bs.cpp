#include<bits/stdc++.h>
using namespace std;


int binarySearch(int arr[], int n, int key){
    int start=0, end=n-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if (arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main(){
    int arr[]={2,5,7,10,12,18};
    int n=6;
    cout<<"Enter the number to search "<<endl;
    int key;
    cin>>key;
    int index=binarySearch(arr,n,key);
    cout<< index;
}
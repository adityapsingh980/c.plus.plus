#include<bits/stdc++.h>
using namespace std;

int firstOccu(int arr[], int n, int key){
    int start=0, end=n-1, ans=0;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if (arr[mid]<key){
            start=mid+1;
        }
        else if (arr[mid]>key){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int lastOccu(int arr[], int n, int key){
    int start=0, end=n-1, ans=0;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if (arr[mid]<key){
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    int arr[]={0,0,1,1,1,2};
    int n=6;
    cout<<"Enter the number to search "<<endl;
    int key;
    cin>>key;
    int indexfirst=firstOccu(arr,n,key);
    int indexlast=lastOccu(arr,n,key);
    cout<<"The index of first occurence is: "<< indexfirst <<endl;
    cout<<"The index of last occurence is: "<< indexlast <<endl;
}
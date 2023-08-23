#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void sort(int arr[],int n){
    int cnt0=0, cnt1=0, cnt2=0;
    for(int i=0;i<n;i++){
    
        switch(arr[i]){
            case 0: cnt0++;
            break;
            case 1: cnt1++;
            break;
            case 2: cnt2++;
            break;
        }
    }
    //initiale value of i.
    int i=0;
    while(cnt0>0){
        arr[i]=0;
        i++;
        cnt0--;
    }
    while(cnt1>0){
        arr[i]=1;
        i++;
        cnt1--;
    }
while(cnt2>0){
        arr[i]=2;
        i++;
        cnt2--;
    }
}
int main()
{
    int arr[]={0,0,1,0,2,2,1,0,1,2};
    int n=10;
    sort(arr,10);
    printArray(arr,10);    
}



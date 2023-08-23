#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int bubble_sort(int arr[], int n){
    //for number of rounds (n-1).
    for(int i=1;i<n-1;i++){
        bool swapped=false;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
            swapped=true;
        }
        
    
    if (swapped==false)
    break;
}
}

int main(){
    int arr[]={4,7,9,0,5};
    int n=5;
    bubble_sort(arr,n);
    printArray(arr,n);
}

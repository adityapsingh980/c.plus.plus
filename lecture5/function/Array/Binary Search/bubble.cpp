#include<bits/stdc++.h>
using namespace std;

void printArray(char arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int selection_sort(char arr[], int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i])
            minIndex=j;
        }
        swap(arr[minIndex],arr[i]);
    }
}
int main(){
    char arr[]={'a','b','d','c','e'};
    int n=5;
    selection_sort(arr,n);
    printArray(arr,5);
}




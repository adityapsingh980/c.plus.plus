#include<bits/stdc++.h>
using namespace std;
int duplicate(int arr[], int size){
    int ans=0;int i;
    for( i=0; i<size; i++){
        ans=ans^arr[i];
    }
    for(i= 1; i<size;i++){
        ans=ans^i;
    }

    return ans;
}



int main(){
    int arr[5]={1,2,3,4,2};
    int n=5;
    cout<<duplicate(arr,5);

}
#include<bits/stdc++.h>
using namespace std;

int merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
            if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
            }
            else{
            arr3[k++]=arr2[j++];
              
            }
    }
    while(i<n){
        arr3[k++]=arr1[i++];
    }
    while(j<m){
      arr3[k++]=arr2[j++];
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr1[5]={};
int n=5;

for(int i=0;i<n;i++){
    cin>>arr1[i];
}
cout<<"the numbers are: ";
for(int n=0;n<5;n++){
    cout<<arr1[n]<<" ";
}
cout<<endl;
int arr2[3]={};

int m=3;
cout<<"enter the array:";
for(int j=0;j<m;j++){
    cin>>arr2[j];
   
}
 
cout<<"the numbers are: ";
for(int m=0;m<3;m++){
    cout<<arr2[m]<<" ";
}
cout<<endl;

int arr3[8]={};
    merge(arr1,n, arr2, m, arr3);
    printArray(arr3,8);
}

    

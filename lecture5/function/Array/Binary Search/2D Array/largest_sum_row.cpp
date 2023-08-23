#include<bits/stdc++.h>
using namespace std;

void largest_rowsum(int arr[][4], int i, int j){
     int rowIndex=-1;
     int maxi=INT_MIN;
    for(int i=0; i<3; i++){
        int sum=0;
       
    for(int j=0;j<4;j++){
    sum=sum+arr[i][j];
    if(sum>maxi){
        maxi=sum;
        rowIndex=i;
    }
    }
    cout<<"Sum of row "<<i <<" is "<<sum<<endl;
}
 cout<<"largest sum is "<<maxi<<" and its row index is "<<rowIndex<<endl;
}

void largest_colsum(int arr[][4], int i, int j){
    int maxi=INT_MIN;
    int colIndex=-1;
    for(int j=0; j<4; j++){
        int sum=0;
    for(int i=0;i<3;i++){
    sum=sum+arr[i][j];
    if(sum>maxi){
        maxi=sum;
        colIndex=j;

    }
    }
    cout<<"Sum of col "<<j <<" is "<<sum<<endl;
    }
cout<<"largest sum is "<<maxi<<" and its col index is "<<colIndex<<endl;
}


int main(){
int arr[3][4];
cout<<"Enter the array elements: ";
for(int i=0; i<3; i++){
    for(int j=0;j<4;j++){
     cin>>arr[i][j];
    }
}
cout<<"The 2D array elements are: "<<endl;
for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

largest_rowsum(arr, 3, 4);
largest_colsum(arr, 3, 4);
}


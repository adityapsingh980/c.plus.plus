#include<bits/stdc++.h>
using namespace std;

void row_sum(int arr[][4], int i, int j){
    for(int i=0; i<3; i++){
        int sum=0;
    for(int j=0;j<4;j++){
    sum=sum+arr[i][j];
    }
    cout<<"Sum of row "<<i <<" is "<<sum<<endl;
}
}

void col_sum(int arr[][4], int i, int j){
    for(int j=0; j<4; j++){
        int sum=0;
    for(int i=0;i<3;i++){
    sum=sum+arr[i][j];
    }
    cout<<"Sum of col "<<j <<" is "<<sum<<endl;
}
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

row_sum(arr, 3, 4);
col_sum(arr, 3, 4);
}


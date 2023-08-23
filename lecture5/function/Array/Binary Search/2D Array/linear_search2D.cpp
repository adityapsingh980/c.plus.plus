#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][4], int k, int i, int j){
    for(int i=0; i<3; i++){
    for(int j=0;j<4;j++){
     if(arr[i][j]==k){
        return 1;
     }
    }
}
return 0;
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
int k;
cout<<"enter the element to search: ";
cin>>k;
if(isPresent(arr, k, 3, 4)){
    cout<<k<<" is present";
}
else{
    cout<<"Not present";
}

}

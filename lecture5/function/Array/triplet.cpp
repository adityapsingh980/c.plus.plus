#include<bits/stdc++.h>
using namespace std;
int pair_sum(int arr1[],int arr2[],int arr3[], int n, int m, int o, int s){
    for(int i=0; i<n; i++){
        for(int j=0;j<m;j++){
            for(int k=0; k<o; k++){
        if(arr1[i]+arr2[j]+arr3[k]==s){
            cout<<arr1[i]<<" "<<arr2[j]<< " " <<arr3[k]<<" ";
        }
    }
        }
        cout<<endl;
}

}

int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={4,3};
    int arr3[]={3,2};
    pair_sum(arr1,arr2,arr3,5,2,1,8);
}

#include<bits/stdc++.h>
using namespace std;

vector <int>rotate (vector <int>& arr,int k){
    vector<int> temp(arr.size());
    for(int i=0; i<arr.size(); i++){
    temp[(i+k)%arr.size()]=arr[i];
    }
    arr=temp;

    
}
void print(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    vector<int> ans=  rotate(arr,2);
    print(ans);

}
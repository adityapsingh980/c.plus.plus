#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"printing the array"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
    int main() {
        int first[15]={2,7};
        int n=15;
        printArray(first,15);

        int second[10]={0};
        n=10;
        printArray(second,10);
    }

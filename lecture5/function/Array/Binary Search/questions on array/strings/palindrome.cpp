#include<bits/stdc++.h>
using namespace std;

char toLowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp= ch - 'A' + 'a';
    
    return temp;
    }
}

string palindrome(char name[], int len){
    int s=0, e=len-1;
    while (s<=e){
        if(toLowercase(name[s])!=toLowercase(name[e])){
            return "no";

        }
        
       else if(name[s]>='!' && name[s]<= '/' || name[e]>='!' && name[e]<= '/'){
         s++;
         e--;
       }
       else{
        s++;
        e--;
       }
    }
    return "yes";
}
/*void print(char name[], int len ){
    for(int i=0; i<len; i++){
        cout<<name[i];
    }
}
*/
int length(char name[]){
    int count=0;
    for(int i=0; name[i]!= '\0' ; i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout<<"enter the name ";
    cin.getline(name,20);
    cout<<"your name is "<<name<<endl;
    int len=length(name);
    cout<<"the length of the name is "<<len<<endl;
    cout<<"it is palindrome? " <<palindrome(name,len)<<endl;
   // print(name,len);
  // cout<<"the lowercase is: "<<toLowercase('C');
}
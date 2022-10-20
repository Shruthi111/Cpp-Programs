// to convert string to uppercase and lower case without using built in functions:

#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if((s[i]>='a') &&(s[i]<='z')){
            s[i]-=32;
        }
    }
    cout<<s<<endl;
    for(int i=0;i<s.size();i++){
        if((s[i]>='A') &&(s[i]<='Z')){
            s[i]+=32;
        }
    }
    cout<<s<<endl;


    return 0;
}
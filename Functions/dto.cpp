#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void dto(int n){
    int rem=0,i=1,ans=0;
    while(n!=0){
        rem=n%8;
        n=n/8;
        ans+=rem*i;
        i*=10;

    }
  cout<<"n in octal format:  "<<ans;
 
   return;
}

int main(){
    int n;
    cout<<"Enter n in decimal format\n";
    cin>>n;
    dto(n);
    return 0;
}
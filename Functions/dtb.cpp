#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void dtb(int n){
    int rem=0,i=1,ans=0;
    while(n!=0){
        rem=n%2;
        n=n/2;
        ans+=rem*i;
        i*=10;

    }
  cout<<"n in binary format:  "<<ans;
 
   return;
}

int main(){
    int n;
    cout<<"Enter n in decimal format\n";
    cin>>n;
    dtb(n);
    return 0;
}
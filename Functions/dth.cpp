#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void dth(int n){
    char h[100];
    int rem=0,i=0;
    int ans=0;
    while(n>0){
        rem=n%16;
       if(rem<10){
           h[i]=rem+48;
           i++;
       }
       else{
           h[i]=rem+55;
           i++;
       }
       n=n/16;
    }
    for(int j=i-1;j>=0;j--){
        cout<<h[j];
    }
  
    
  
 
   return;
}

int main(){
    int n;
    cout<<"Enter n in decimal format\n";
    cin>>n;
    dth(n);
    return 0;
}
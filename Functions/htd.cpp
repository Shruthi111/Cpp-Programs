#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void htd(string n){
    int ans=0,x=1;
int s=n.size();
for(int i=s-1;i>=0;i--){
    if((n[i]>='0')&&(n[i]<='9')){
        ans+=x*(n[i]-'0');
    }else
        if((n[i]>='A')&&(n[i]<='F')){
            ans+=x*(n[i]-'A'+10);
        }
    x*=16;
}

  
  cout<<"n in decimal format:  "<<ans;
 
   return;
}

int main(){
    string n;
    cout<<"Enter n in hexadecimal format\n";
    cin>>n;
    htd(n);
    return 0;
}
#include<iostream>

using namespace std;

void btd(int n){
    int ans=0,x=1;
  while(n>0){
      int d=n%10;
      ans+=d*x;
      x*=2;
      n=n/10;
  }
  cout<<"n in decimal format:  "<<ans;
 
   return;
}

int main(){
    int n;
    cout<<"Enter n in binary format\n";
    cin>>n;
    btd(n);
    return 0;
}
#include<iostream>

using namespace std;

void otd(int n){
    int ans=0,x=1;
  while(n>0){
      int d=n%10;
      ans+=d*x;
      x*=8;
      n=n/10;
  }
  cout<<"n in decimal format:  "<<ans;
 
   return;
}

int main(){
    int n;
    cout<<"Enter n in octal format\n";
    cin>>n;
    otd(n);
    return 0;
}
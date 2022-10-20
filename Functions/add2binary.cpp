#include<iostream>

using namespace std;

int btd(int n){
    int ans=0,x=1;
  while(n>0){
      int d=n%10;
      ans+=d*x;
      x*=2;
      n=n/10;
  }
  
   return ans;
}
int dtb(int n){
    int rem=0,i=1,ans=0;
    while(n!=0){
        rem=n%2;
        n=n/2;
        ans+=rem*i;
        i*=10;

    }
  
 
   return ans;
}

int main(){
    int n1,n2;
    cout<<"Enter the 2 binary numbers\n";
    cin>>n1>>n2;
    int a=btd(n1);
    int b=btd(n2);
   int  sum=a+b;
   int add=dtb(sum);
   cout<<add;
    return 0;
}
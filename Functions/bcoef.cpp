#include <iostream>
using namespace std;

int fact(int n){
    int fact=1;
 for(int i=1;i<=n;i++)
 {
     fact*=i;

 }
 
    
    return fact;
}
int main()
{ int n,r,ans;
    cout<<"Enter the value of n and r\n";
    cin>>n>>r;
    ans=fact(n)/(fact(n-r)*fact(r));
    cout<<ans;

    return 0;
}
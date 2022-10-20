#include <iostream>
using namespace std;

void fib(int n){
  int  t1=0;
  int  t2=1;
  cout<<t1<<endl;
  cout<<t2<<endl;
    for(int i=1;i<=n;i++){
       int t3=t1+t2;
       cout<<t3<<endl;
        t1=t2;
        t2=t3;
    }
    
    return;
}
int main()
{ int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    fib(n);


    return 0;
}
#include <iostream>
using namespace std;

void fact(int n){
    int fact=1;
 for(int i=1;i<=n;i++)
 {
     fact*=i;

 }cout<<fact;
 
    
    return;
}
int main()
{ int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    fact(n);


    return 0;
}
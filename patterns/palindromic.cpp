#include<iostream>
using namespace std;
int main()
{ int n,i=1,j=1,k=i;
cout<<"Enter n\n";
cin>>n;
for(i=1;i<=n;i++){
    
    for(j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(;j<=n;j++){
        cout<<k--;
        
    }
    k=2;
    for(;j<=n+i-1;j++){
        cout<<k++;
        
    }
    cout<<endl;
}
    return 0;
}
#include<iostream>
using namespace std;
int main()
{ int n,key,i=-1;
cout<<"Enter the array size\n";
cin>>n;
int a[n];
for( i=0;i<n;i++){
    cin>>a[i];
}
cout<<"Enter  the key element\n";
cin>>key;
for( i=0;i<n;i++){
    if(key==a[i]){
        cout<<key<<"  is present at the position "<<i+1<<endl;
    }
    
}

    return 0;
}

#include<iostream>
using namespace std;
int main()
{ int n,mid,low,high,key;
low=0;high=n-1;
cout<<"Enter the n value\n";
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];}
    cout<<"Enter element\n";
    cin>>key;
   
    while(low<=high)
    {
 mid=(low+high)/2;
if(a[mid]==key){
    cout<<key<<" is found at position "<<mid+1<<endl;
}
 
 }

    return 0;
}

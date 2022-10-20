#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int target;
    cin>>target;
    int r=0,c=m-1;
    int flag=0;
    while(r<n && c>=0){
        if(a[r][c]==target){
            flag=1;
        }
        if(a[r][c]>target){
            c--;
        }else{r++;}
    }
    if(flag==1){
        cout<<"Element found\n";
    }else{cout<<"Not found\n";}
    return 0;
}
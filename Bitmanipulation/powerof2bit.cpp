// // To find whether the given no is power of 2
// #include<iostream>
// using namespace std;

// bool powerof2(int n)
// {
//     return(n && !(n & n-1));
// }

// int main()
// {
//     cout<<powerof2(8);

//     return 0;
// }

#include<iostream>
using namespace std;

int main()
{float n,flag=0;
    cout<<"Enter the number\n";
    cin>>n;
    while(n!=0)
    {
        n=n/2;
        if(n==1)
       {
        flag=1;
        break;
       }
    }
    if(flag==1)
    {
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
    

    
    return 0;
}
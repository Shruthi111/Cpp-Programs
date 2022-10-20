#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter n\n";
    cin >> n;
    // for(i=1;i<=n;i++){
    //     for(j=1;j<=n;j++)
    //     {
    //         if(j<=n-i){
    //             cout<<" ";
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

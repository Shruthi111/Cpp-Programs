// forloop:Print the nos from1 to 100 and skip those which are divisible by 3
// #include<iostream>
// using namespace std;
// int main()

// {
//      for(int i=1;i<=100;i++){

//     if(i%3==0){
//         continue;
//     }
//     cout<<i<<endl;
// }
// return0;
// }

#include <iostream>
using namespace std;
int main()

{
    int d, pm = 3000;
    for (d = 1; d <= 31; d++)
    {
        if (d % 2 == 0)
        {
            continue;
        }
        cout << "You can go out" << endl;
        pm = pm - 500;
        if (pm == 0)
        {
            break;
        }
    }
    return 0;
}

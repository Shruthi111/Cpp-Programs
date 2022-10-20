// To check whether the given triplet is pythagorean triplet or not

#include <iostream>
#include <math.h>
using namespace std;

void pt(int a, int b, int c)
{
    int y, z;
    int x = max(a, max(b, c));
    if (x == a)
    {
        y = b;
        z = c;
    }
    else if (x == b)
    {
        y = a;
        z = c;
    }
    else
    {
        y = a;
        z = b;
    }
    if (x * x == (y * y + z * z))
    {
        cout << "Pythogorean triplet\n";
    }
    else
    {
        cout << "Not pythogorean triplet\n";
    }
    return;
}

int main()
{
    int a, b, c;
    cout << "Enter a,b and c\n";
    cin >> a >> b >> c;
    pt(a, b, c);
    return 0;
}
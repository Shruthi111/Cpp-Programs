//  no of Record breaking days:
// Google kickstart
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n + 1];
  a[n] = -1;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int ans = 0;
  int mx = -1;

  for (int i = 0; i < n; i++)
  {
    if ((a[i] > mx) && (a[i] > a[i + 1]))
    {
      ans++;
    }
    mx = max(mx, a[i]);
  }
  cout << ans << endl;

  return 0;
}
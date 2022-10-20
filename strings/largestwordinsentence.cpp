#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    char sentence[n + 1];

    cin.getline(sentence, n);
    cin.ignore();

    // cout << sentence;
    int i = 0, curlen = 0, maxlen = 0, st = 0, maxst = 0;
    while (1)
    {
        if (sentence[i] == ' ' || sentence[i] == '\0')
        {
            if (curlen > maxlen)
            {
                maxlen = curlen;
                maxst = st;
            }
            curlen = 0;
            st = i + 1;
        }
        else
        {
            curlen++;
        }

        if (sentence[i] == '\0')
        {
            break;
        }
        i++;
    }
    cout << maxlen;
    for (int i = 0; i < maxlen; i++)
    {
        cout << sentence[i + maxst];
    }
    return 0;
}
// multi lang robot using switch
#include <iostream>
using namespace std;
int main()

{
    char button;
    cout << "Touch the button\n";
    cin >> button;
    switch (button)
    {
    case 'E':
        cout << "Hello\n";
        break;
    case 'K':
        cout << "Namaskara\n";
        break;
    case 'H':
        cout << "Namasthe\n";
        break;
    case 'T':
        cout << "Solmelu\n";
        break;

    default:
        cout << "Language not recognized\n";
        break;
    }

    return 0;
}

// Calculator prog:

#include <iostream>
using namespace std;
int main()
{
    char op;
    int a, b, res;
    cout << "Enter the operands\n";
    cin >> a >> b;
    cout << "Enter the operator\n";
    cin >> op;
    switch (op)
    {
    case '+':
        res = a + b;
        cout << res;
        break;
    case '-':
        res = a - b;
        cout << res;
        break;
    case '*':
        res = a * b;
        cout << res;
        break;
    case '/':
        res = a / b;
        cout << res;
        break;
    case '%':
        res = a % b;
        cout << res;
        break;
    default:
        cout << "Invalid operator\n";
        break;
    }

    return 0;
}

// To check if the letter is vowel or consonent:

#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter the alphabet\n";
    cin >> c;
    switch (c)
    {
    case 'a':
        cout << "Vowel\n";
        break;
    case 'e':
        cout << "Vowel\n";
        break;
    case 'i':
        cout << "Vowel\n";
        break;
    case 'o':
        cout << "Vowel\n";
        break;
    case 'u':
        cout << "Vowel\n";
        break;

    default:
        cout << "Consonent\n";
        break;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    long long inp;
    cin >> inp;

    while (true)
    {
        cout << inp << " ";
        if (inp == 1)
        {
            break;
            inp = 1;
        }

            if (inp % 2 == 0)
            {
                inp = inp / 2;
            }
            else
            {
                inp = (inp * 3) + 1;
            }
    }

    return 0;
}
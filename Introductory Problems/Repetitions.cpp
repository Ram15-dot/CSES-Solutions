#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    long long count = 1, result = 1;
    string inp;
    cin >> inp;

    for (int i = 1; i < inp.length(); i++)
    {

        if (inp[i] == inp[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        result = max(result, count);
    }

    // Comparing

    cout << result;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;
int main()
{
    long long inp;
    long long in2;
    cin >> inp;
    long long totalsum = 1LL * inp * (inp + 1) / 2;
    long long sum = 0;


    for (int i = 1; i < inp; i++)
    {

        cin >> in2;
        sum = sum + in2;
    }

    cout << totalsum - sum;
    return 0;
}

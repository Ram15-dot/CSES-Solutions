#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    long long move = 0;
    int lenArr;
    cin >> lenArr;
    vector<long long> arr(lenArr);

    for (int i = 0; i < lenArr; i++)
    {
        cin >> arr[i];
    }

    for (int j = 1; j < lenArr; j++)
    {
        if (arr[j] < arr[j - 1])
        {
            move += (arr[j -1] - arr[j]);
            arr[j] = arr[j - 1];
        }
    }
    cout << move;
    return 0;
}
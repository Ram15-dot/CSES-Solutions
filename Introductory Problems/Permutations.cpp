#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int input;
    cin >> input;
    vector<int> numbers, ans;
    for (int i = 1; i <= input; i++)
    {
        numbers.push_back(i);
    }

    if (!(1 < input && input <= 3))
    {

        for (int j = 0; j < numbers.size(); j++)
        {
            if (numbers[j] % 2 == 0)
            {
                ans.push_back(numbers[j]);
            }
        }
        for (int k = 0; k < numbers.size(); k++)
        {

            if (numbers[k] % 2 != 0)
            {
                ans.push_back(numbers[k]);
            }
        }

        for (int a = 0; a < ans.size(); a++)
        {
            cout << ans[a] << " ";
        }
    }

    else
    {
        cout << "NO SOLUTION";
    }

    return 0;
}
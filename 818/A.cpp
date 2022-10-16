#include <iostream>

using namespace std;

int solve()
{
    long sum = 0;
    long n;
    cin>>n;
    sum = n + 2 * (n / 2 + n / 3);
    return sum;
}

int main()
{
    int test_cases;
    cin >> test_cases;

    for (size_t i = 0; i < test_cases; i++)
    {
        cout << solve() << endl;
    }

    return 0;
}
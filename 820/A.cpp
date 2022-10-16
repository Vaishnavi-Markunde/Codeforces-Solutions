#include <iostream>

using namespace std;

int solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    int call = 1;

    if (a != 1)
    {
        int tot = c - 1;

        if (c > b)
            tot += c - b;
        else
            tot += b - c;

        if (a - 1 < tot)
            call = 1;
        else if (a - 1 == tot)
            call = 3;
        else if (a - 1 > tot)
            call = 2;
    }

    return call;
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
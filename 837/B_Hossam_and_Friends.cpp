//Doesnt work :(

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        long long n, friends;
        cin >> friends >> n;
        long long adj[friends + 1][friends + 1];
        for (long long i = 0; i < n; i++)
        {
            long long u, v;
            cin >> u >> v;
            adj[u][v] = 1;
            adj[v][u] = 1;
        }

        long long subsets = 0;

        for (long long i = 1; i < friends + 1; i++)
        {
            long long subs[friends], z = 0, p = 0;
            for (long long j = i; j < friends + 1; j++)
            {
                subs[z] = j;
                z++;
                for (long long k = 0; k < z; k++)
                {
                    for (long long l = 0; l < z; l++)
                    {
                        if (adj[subs[k]][subs[l]] == 1)
                        {
                            p = 1;
                            break;
                        }
                    }
                    if (p == 1)
                    {
                        break;
                    }
                }
                if (p == 1)
                {
                    break;
                }
                else
                {
                    subsets += 1;
                }
            }
        }
        cout << subsets << endl;
    }
    return 0;
}
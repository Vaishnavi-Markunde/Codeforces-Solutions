//Doesnt work :(

#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 

long long gcd(long long a, long long b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers

void solve()
{
    long long n, temp;
    vector<long long> v;
    cin>>n;
    for (size_t i = 0; i < n; i++)
    {
        cin>>temp;
        v.push_back(temp);
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = i + 1; j < n; j++)
        {
            if(i != j)
            {
                if(gcd(v[i], v[j]) > 1)
                {
                    cout<<"YES"<<endl;
                    return;
                }
            }
        }
        
    }
    cout<<"NO"<<endl;
}
 
int main()
{
    int test_cases;
    cin >> test_cases;
    for (size_t i = 0; i < test_cases; i++)
    {
        solve();
    }
    
    return 0;
}
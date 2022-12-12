#include<bits/stdc++.h>

using namespace std;
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

    sort(v.begin(), v.end());

    unordered_map<long long, long long> map;
    for(auto i : v) map[i]++;
    if(map[v[0]] == n){
        cout<<n*(n-1)<<endl;
        return;
    } 

    long long ans = map[v[0]] * map[v[n - 1]] * 2;
    cout<<ans<<endl;
    
}


int main()
{
    int test_cases;
    cin>>test_cases;
    for (size_t i = 0; i < test_cases; i++)
    {
        solve();
    }
    
    return 0;
}
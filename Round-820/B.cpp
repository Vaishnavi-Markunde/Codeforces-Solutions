#include<iostream>
#include<algorithm>

using namespace std;

string solve()
{
    int length;
    string t, num;
    cin>>length;
    cin>>t;
    int i = length - 1;
    while (i >= 0)
    {
        if(t[i] != '0')
        {
            num.push_back((char)(t[i] + 48));
        }
        else{
            int temp = ((t[i - 2] - '0') * 10 + (t[i - 1]) - '0') + 96;
            num.push_back((char)(temp));
            i -= 2;
        }
        i--;
    }
    
    reverse(num.begin(), num.end());
    return num;
}


int main()
{
    int test_cases;
    cin>>test_cases;

    for (size_t i = 0; i < test_cases; i++)
    {
        cout<<solve()<<endl;
    }
    
}
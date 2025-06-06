#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int n;
    ll k;
    cin >> n >>k;
    vector<ll> vec(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> vec[i];
    }
    int l=0,r=0,cnt=0;
    ll sum=0;
    while(r<n)
    {
        sum+=vec[r];
        while(sum>k and l<=r)
        {
            sum-=vec[l];
            l++;
        }
        if(sum==k)
        {
            cnt++;
        }

        r++;

    }
    cout<<cnt<<endl;
}

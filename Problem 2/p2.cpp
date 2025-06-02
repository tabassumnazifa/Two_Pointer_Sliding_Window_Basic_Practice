#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<ll>vec(n);
    for(int i=0;i<n;i++)
        cin>>vec[i];
    int l=0,r=n-1;
    ll lsum=vec[0],rsum=vec[n-1],res=0,maxi=-1;
    while(l<r)
    {
        if(lsum<rsum)
        {
            l++;
            lsum+=vec[l];
        }
        else if(rsum<lsum)
        {
            r--;
            rsum+=vec[r];
        }
        else if(rsum==lsum)
        {
            l++;
            r--;
            res=lsum;
            rsum+=vec[r];
            lsum+=vec[l];
        }
    }
    cout<<res<<endl;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0; i<n; i++)
        cin>>vec[i];
    int k;
    cin>>k;
    sort(vec.begin(),vec.end());
    int i=0,r=n-1,sum=0;
    bool pos=false;
    while(i<r)
    {
        sum=vec[i]+vec[r];
        if(sum==k)
        {
            pos=true;
            break;
        }
        else if(sum<k)
            i++;
        else
            r--;

    }
    (pos)?(cout<<"YES"<<endl):(cout<<"NO"<<endl);
}

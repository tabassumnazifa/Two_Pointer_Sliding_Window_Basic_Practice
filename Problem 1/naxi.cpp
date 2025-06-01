#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0; i<n; i++)
        cin>>vec[i];
    int k,sum=0;
    cin>>k;
    for(int i=0; i<k; i++)
        sum+=vec[i];
    int maxi=sum;
    int right=n-1;
    for(int i=k-1; i>=0; i--)
    {
        sum-=vec[i];
        sum+=vec[right];
        right--;
        maxi=max(maxi,sum);
    }
    cout<<maxi<<endl;
}

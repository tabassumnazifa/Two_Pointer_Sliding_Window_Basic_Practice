#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {-1, 1, 5, 5, 7};
    int target = 6;
    int sum=0;
    sort(arr.begin(), arr.end());
    int left = 0, right = arr.size() - 1;
    int res = 0,cnt=0;
    while (left < right)
    {
        sum=arr[left] + arr[right];
        if(sum<target)
            left++;
        else if(sum>target)
            right--;
        else
        {
            int c1=0,c2=0;
            int a=arr[left],b=arr[right];
            while(left<=right and arr[left]==a)
            {
                c1++;
                left++;
            }
            while(left<=right and arr[right]==b)
            {
                c2++;
                right--;
            }
            if(a==b)
                cnt+=(c1*(c2-1))/2;
            else
                cnt+=c1*c2;

        }
    }
    cout<<cnt<<endl;
}

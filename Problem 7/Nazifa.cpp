class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.size();
        int ar[256];
        for(int i = 0; i < 256; i++)
            ar[i] = -1;
        int left = 0, right = 0, maxi = 0, len;
        while (right < n)
        {
            if (ar[s[right]] != -1)
            {
                left = max(left, ar[s[right]] + 1);
            }
            len = right - left + 1;
            maxi = max(maxi, len);
            ar[s[right]] = right;
            right++;
        }
        return maxi;
    }
};

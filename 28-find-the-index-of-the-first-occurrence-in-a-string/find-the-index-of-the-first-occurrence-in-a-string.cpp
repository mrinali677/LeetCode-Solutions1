class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.length();
        int m=needle.length();
        if(m>n)return -1;
        for(int i=0;i<n;i++)
        {
            int j=0;
            while(j<m&&haystack[i+j]==needle[j]) //for i=0..the while loops runs  j++ & until j==m or no match later i incmnts
            {
                j++;
            }
            if(j==m)
            {
                return i;
            }
        }
        return -1;
        
    }
};
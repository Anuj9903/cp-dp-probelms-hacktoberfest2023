class Solution {
public:
    string longestPalindrome(string s) {
        
        int length = s.size();
        if(length==1)
            return s;
        int dp[length][length];
        int j=0,start=0,end=1;
        string ans=s.substr(0,1);
        
        memset(dp,0,sizeof(dp));
        
        for(int i=0;i<length;i++)
            dp[i][i]=1;
                
        int i,c=1;
        for(i=0;c<length;i=0,c++) {
            for(int j=i+c;j<length;j++,i++) {
                if(s[i]==s[j] and (j-i==1 or dp[i+1][j-1])) {
                    dp[i][j]=1;
                    start=i;
                    end=j-i+1;
                }
            }   
        }

        return s.substr(start,end); 
    }
};

class Solution {
public:
    bool isPalindrome(string s) {
        string ans ="";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                ans+=tolower(s[i]);
            }
        }

        int n=ans.length();

        for(int i=0;i<n;i++){
            if(ans[i]!=ans[n-i-1]){
                return false;
            }
        }
        return true;
    }
};

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();

        if (n > m) return false;


        vector<int>freqs1(26,0) ,freqs2(26,0);

        for(char ch:s1) freqs1[ch-'a']++;

        // first window
        for(int i=0;i<n;i++){
            freqs2[s2[i]-'a']++;
        }

        if(freqs1==freqs2) return true;

        for(int i=n;i<m;i++){
            freqs2[s2[i]-'a']++;
            freqs2[s2[i-n]-'a']--;

            if(freqs1==freqs2){
                return true;
                break;
            }    
        }
        return false;
    }
};

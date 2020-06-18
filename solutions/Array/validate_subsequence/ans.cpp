//c++
class Solution {
public:
    bool isSubsequence(string t, string s) {
        if(s.size()==0 && t.size()==0)return 1;
        int t_start = 0;
        for(int i=0;i<s.size();i++){
            if(t[t_start]==s[i])t_start++;
            if(t_start==t.size())return 1;
        }
        return 0;
        
    }
};
class Solution {
public:
    bool canConvertString(string s, string t, int k) {
        if(s.size()!=t.size()) return false;
        int n = s.size();
        vector<int> map(27,0);
        int mini = k/26;
        int rest = k%26;
        for(int i=1; i<=26; i++)
        {
            map[i] = mini;
            if(i<=rest)
                map[i]++;
        }

        for(int i=0; i<n; i++)
        {
            int diff = (t[i]-s[i]);
            if(diff==0) continue;
            if(diff<0) diff += 26;
            if(map[diff]==0)
                return false;
            else
            {
                map[diff]--;
            }
        }
        return true;
    }
};
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        vector<int> fr(26 , 0);

        for(char c : s){
            fr[c - 'a']++;
        }

        for(char c : t){
            fr[c - 'a']--;
        }

        for(int i = 0 ; i < 26 ; i++){
            if(fr[i] > 0) return false;
        }
        return true;
    }
};

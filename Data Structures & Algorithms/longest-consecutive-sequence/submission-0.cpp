class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;

        unordered_set<int> st(nums.begin(), nums.end());

        int n = nums.size();
        int longest = 1;

        for(auto it : st){
            if(st.find(it - 1) == st.end()){
                int cnt = 1 , x = it;
                while(st.find(x + 1) != st.end()){
                    x++;
                    cnt++;
                }
                longest = max(longest , cnt);
            }
        }
        return longest;
    }
};
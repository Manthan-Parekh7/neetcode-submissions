class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(k == nums.size()) return nums;
        
        unordered_map<int , int> mp;
        for(auto num : nums){
            mp[num]++;
        }

         auto comparision = [&mp](int n1 , int n2){
            return mp[n1] > mp[n2];
        };

        priority_queue<int, vector<int>, decltype(comparision)> pq(comparision);

        for(auto& a : mp){
            pq.push(a.first);
            if(pq.size() > k) pq.pop();
        }

        // Take it to the array for output 
        vector<int> mostFreq(k);
        for(int i = k - 1 ; i >= 0 ; i--){
            mostFreq[i] = pq.top();
            pq.pop();
        }
        return mostFreq;
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int , int>> hashTable; 
        for(int i = 0 ; i < nums.size() ; i++){
            hashTable.push_back({nums[i] , i});
        }

        sort(hashTable.begin() , hashTable.end());

        int left = 0 , right = hashTable.size() - 1;

        while(left < right){
            int sum = hashTable[left].first + hashTable[right].first;
            if(sum == target){
                if(hashTable[left].second < hashTable[right].second){
                  return {hashTable[left].second , hashTable[right].second};
                }else{
                    return {hashTable[right].second , hashTable[left].second};
                }
            }
            else if(sum > target){
                right--;
            }else{
                left++;
            }
        }
        return {-1 , -1};
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int value = target - nums[i];
            auto findValue = mp.find(value);//if the value does not exist it will point to end of unordered_Map
            if (findValue != mp.end()) {
                return {findValue->second, i};
            }

            mp[nums[i]] = i;
        }

        return {-1, -1};  
    }
};
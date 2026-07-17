class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int oneByFour = n/4 ;
        unordered_map<int , int>mp;
        for(int value : arr){
            mp[value]++;
        }

        for(auto value : mp){
            if(value.second > oneByFour)return value.first;
        }
        return -1;
    }
};
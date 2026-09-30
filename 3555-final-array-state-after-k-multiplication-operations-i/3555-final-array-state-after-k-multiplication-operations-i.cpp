class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n = nums.size();
        for(int i=0;i<k;i++){
            int smallNumber = INT_MAX;
            int idx =0;
            for(int i =0;i<n;i++){
                if(smallNumber > nums[i]){
                    smallNumber = nums[i];
                    idx = i;
                }
                
            }
            nums[idx] = smallNumber * multiplier;
        }

        return nums;
    }
};
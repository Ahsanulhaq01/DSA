class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum =0;
        int digitSum = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int dup = nums[i];
            while(dup > 0){
                int digit = dup%10;
                digitSum+=digit;
                dup/=10;
            }
        }
        return abs(sum-digitSum);
    }
};
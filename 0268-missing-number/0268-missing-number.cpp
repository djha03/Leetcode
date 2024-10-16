class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int realSum=(n*(n+1))/2;
        int numsSum=0;
        for(int i=0; i<nums.size(); i++){
            numsSum+=nums[i];
        }
        return realSum-numsSum;
    }
};
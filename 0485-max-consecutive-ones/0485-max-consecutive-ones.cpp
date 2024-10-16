class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;
        int maxOne=0;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                cnt++;
            }else if(nums[i]==0){
                cnt=0;
            }
            maxOne=max(cnt, maxOne);
        }
        return maxOne;
    }
};
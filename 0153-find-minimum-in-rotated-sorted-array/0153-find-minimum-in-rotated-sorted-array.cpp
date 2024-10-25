class Solution {
public:
    int findMin(vector<int>& nums) {
        // int ans=0;
        // int i=0;
        // int minimum=INT_MAX;
        // for(int j=i; j<nums.size(); j++){
        //     if(nums[i]>nums[j]){
        //         ans=nums[j];
        //         minimum=min(minimum, ans);        
        //     }
        // }
        // return minimum;
        
        
         int minimum = INT_MAX;

        // Nested loop for O(n^2) complexity
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i; j < nums.size(); j++) {
                if (nums[j] < minimum) {
                    minimum = nums[j];
                }
            }
        }
        
        return minimum;
    
    }
};
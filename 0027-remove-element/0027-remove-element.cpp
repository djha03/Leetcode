class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int f=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=val){
                nums[f]=nums[i];
                f++;
            }
        }
        return f;
    }
};
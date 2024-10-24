class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        
        while(s<=e){
            long long mid=s+(e-s)/2;
            if(nums[mid]==target) return mid;
            else if(nums[s]<=nums[mid]){
                if(nums[s]<=target && target<=nums[mid]){
                    e=mid-1;
                }else{
                    s=mid+1;
                }
            }
            else if(nums[mid]<=nums[e]){
                if(target>=nums[mid] && target<=nums[e]){
                    s=mid+1;
                }else{
                    e=mid-1;
                }
            }
        }
        return -1;
    }
};
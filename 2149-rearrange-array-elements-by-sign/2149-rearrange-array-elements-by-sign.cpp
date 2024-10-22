class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>p;
        vector<int>neg;
        vector<int>ans;
        
        for(int i=0; i<n; i++){
            if(nums[i]>0){
                p.push_back(nums[i]);
            }else{
                neg.push_back(nums[i]);
            }
        }
        
        for(int j=0; j<p.size(); j++){
            ans.push_back(p[j]);
            ans.push_back(neg[j]);
            
        }
        return ans;
    }
};
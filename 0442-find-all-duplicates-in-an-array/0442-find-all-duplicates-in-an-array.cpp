class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       map<int, int>mpp;
        vector<int>dj;
        
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        
        for(auto it:mpp){
            if(it.second > 1){
                dj.push_back(it.first);
            }
        }
        return dj;
    }
};
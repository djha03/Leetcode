class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // //!BRUTE-FORRCE APPROACH
        // vector<int>temp; //created a new vector
        // int n=nums.size();
        // for(int i=0; i<n; i++) {
        //     if(nums[i]!=0) {
        //         temp.push_back(nums[i]);
        //     }
        // }

        // int nz=temp.size();
        // for(int i=0; i<nz; i++) {
        //     nums[i]=temp[i];
        // }
        
        // for(int i=nz; i<n; i++) {
        //     nums[i]=0;
        // }

        //OPTIMAL SOLN
       int i=0;
       for(int j=0; j<nums.size(); j++) {
           if(nums[j]!=0) {
               swap(nums[j], nums[i]);
               i++;
           }
       }
    }
};
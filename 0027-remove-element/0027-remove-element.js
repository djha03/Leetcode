/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function(nums, val) {
        let i;
        let s=0;
        let n=nums.length;

        if(n==0)
        return 0;
        for(i=0; i<n; i++)
        {
            if(nums[i]!=val)
            {
                nums[s]=nums[i];
                s++;
            }
        }
        return s;
    }

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        int k = 1;
        int iteration = 1;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1])
                iteration++;
            else
                iteration = 1;
            if(iteration <= 2) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};

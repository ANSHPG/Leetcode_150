class Solution {
public:
    bool canJump(vector<int>& nums) {
        int far =  0;
        int end = nums.size();

        for(int i = 0; i<end-1; i++){
            if(nums[i] == 0){
                if(far <= i)
                    return false;
            }
            if((i+nums[i]) > far)
                far = i+nums[i];
        }

        if(far >= end-1)
            return true;
        else 
            return false;
    }
};

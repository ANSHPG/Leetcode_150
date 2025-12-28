class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int k = nums.size() / 2;
        int major = 0;

        for(int target : nums ){
            int occur = std::count(nums.begin(), nums.end(), target);
            if(occur > k){
                major =  target;
                break;
            }
        }

        return major;
    }
};

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0,p=0;
        std::vector<int> box(nums.size(), val);

        for(int i=0; i<nums.size(); i++){
            if(nums[i] == val)
                k++;
            else
                box[p++] = nums[i];
        }

        k = nums.size() - k;
        nums = box;

        return k;

    }
};

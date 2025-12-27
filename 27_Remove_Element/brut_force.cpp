class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        std::vector<int> box;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] == val)
                k++;
            else
                box.push_back(nums[i]);
        }

        for(int i=0; i<=k; i++)
            box.push_back(val);

        k = nums.size() - k;
        nums = box;

        return k;

    }
};

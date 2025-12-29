class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int end = nums.size();
        if(end > 1){
            k = k % end;
            std::vector<int> extract(nums.begin()+(end-k), nums.begin()+end);
            extract.insert(extract.end(), nums.begin(), nums.begin()+(end - k));
            nums = extract;
        }
    }

};

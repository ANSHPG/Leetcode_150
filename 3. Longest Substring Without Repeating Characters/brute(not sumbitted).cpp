class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string result = "";
        int initial = 0;

        std::vector<int> final_list;

        for(int i=0; i<s.length()-1; i++){
            char a = s[i];
            char b = s[i+1];
            result += a;
            if(s.substr(initial, i+1).find(b) != std::string::npos){
                final_list.push_back(s.substr(initial, i+1).size());
                initial = i+1;
            }
        }

        final_list.push_back(s.substr(initial, s.length()).size());

        int max = 1;
        for(int i=0; i<final_list.size(); i++){
            if(max < final_list[i] ){
                max = final_list[i];
            }
        }

        return max;
    }
};

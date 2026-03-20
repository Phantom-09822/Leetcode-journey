class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Basic safety check
        if (nums.empty()) return -1;

        int cnt = 0;
        int el;

        // Phase 1: Finding the candidate
        for(int i = 0; i < nums.size(); i++){
            if(cnt == 0){
                cnt = 1;
                el = nums[i];
            } // Removed the semicolon here
            else if(nums[i] == el){
                cnt++;
            }
            else {
                cnt--;
            }
        }

        // Phase 2: Verifying the candidate
        int cnt1 = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == el) cnt1++;
        }

        if(cnt1 > (nums.size() / 2)){
            return el;
        }
        
        return -1;
    }
};
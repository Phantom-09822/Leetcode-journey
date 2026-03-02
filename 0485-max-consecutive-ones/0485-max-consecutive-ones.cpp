class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                cnt++;
                //if current number is 1, snt increases by 1
                maxi= max(maxi,cnt);
//this ensures tat maxi remembers the highest streak we've reached so far
            }
            else{
                cnt=0;
                //a 0 breaks the chain of 1s, and it starts counting form 0 again.
            }
        }
        return maxi;
    }
};
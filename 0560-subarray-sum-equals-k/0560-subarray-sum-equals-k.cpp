class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //map stores how many times we have seen this array
        unordered_map<int,int> preSumMap;
        //base case:presum==0;
        preSumMap[0]=1;
        int sum=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            //if sum (x-k) exists, then we have found the subarray which sums to k
            int remove = sum-k;
            if(preSumMap.find(remove) != preSumMap.end()){
                count +=preSumMap[remove];
            }
            //increment the frequency of the current sum
            preSumMap[sum]++;

        }
        return count;
    }
};
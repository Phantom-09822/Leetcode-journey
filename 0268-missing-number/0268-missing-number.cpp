class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1 = 0, xor2 = 0;
        int n = nums.size(); // N is derived from the array size

        for (int i = 0; i < n; i++) {
            xor2 = xor2 ^ nums[i];   // XOR array elements
            xor1 = xor1 ^ (i + 1);    // XOR range 1 to n
        }
        
        
        return xor1 ^ xor2; 
    }
};
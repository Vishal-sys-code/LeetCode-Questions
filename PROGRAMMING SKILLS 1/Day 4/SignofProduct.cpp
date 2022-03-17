class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n = nums.size();
        int ans = 1;
        for(int i : nums){
            if(i == 0){
                return 0;
            }
            if(i < 0){
                ans = -ans;
            }
        }
        return ans;
    }
};
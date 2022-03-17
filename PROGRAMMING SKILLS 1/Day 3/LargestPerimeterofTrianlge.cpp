class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i=n-3;i>=0;i--){
            sort(nums.begin(), nums.end());
            if(nums[i] + nums[i+1] > nums[i+2]){
                ans = nums[i] + nums[i+1] + nums[i+2];
                return ans;
            }
        }
        return 0;
    }
};
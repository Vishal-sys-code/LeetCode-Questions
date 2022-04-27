#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int TotalSum = nums[0];
        int CurrSum = nums[0];
        for(int i=1;i<n;i++){
            CurrSum +=  nums[i];
            CurrSum  =  max(CurrSum,nums[i]);
            TotalSum =  max(CurrSum,TotalSum);
        }
        return TotalSum;
    }
};

// As simple as Kadane Algorithms
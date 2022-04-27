#include <bits/stdc++.h> //includes every thing which we requires
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int m = nums.size();
        int n = set<int>(nums.begin(),nums.end()).size();
        return m>n;
    }
};

/* 
Explanation
In this question I have taken the original array size and then stored the array in a set in which the duplicate values will be rejected by this the array size should be reduced and in sorted order too. So Just return the that original array size is greater than that of the new set array.
*/
// link: https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/

class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size();
        int f = salary.size()-2;
        double sum1 = 0, sum2 = 0;
        for(int i=0;i<n;i++){
            sum1+=salary[i];
        }
        int max = salary[0]; 
        int min = salary[0]; 
        for(int i=0;i<n;i++){
            if(max < salary[i]){
                max = salary[i];
            }
            if(min > salary[i]){
                min = salary[i];
            }
        }
        sum2 = max+min;
        double diff = sum2-sum1;
        double ans = abs(diff)/f;
        return ans;
    }
};
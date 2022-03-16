class Solution {
public:
    int subtractProductAndSum(int n) {
        int num = n;
        int mul = 1, sum = 0, ans = 0;
        int rem;
        while(num != 0){
            rem = num%10;
            mul = mul * rem;
            sum = sum + rem;
            num/=10;
        }
        ans = (mul - sum);
        return (ans);
    }
};
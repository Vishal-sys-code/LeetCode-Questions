class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();
        bool f = false;
        sort(arr.begin(),arr.end());
        int K = arr[1] - arr[0];
        for(int i=0;i<n-1;i++){
            if(arr[i+1] - arr[i] == K){
               f  = true;
            }
            else{
                f = false;
                break;
            }
        }
        return f;
    }
};
class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int n = points.size();
        int min = INT_MAX;
        int Manhattan;
        int ans = -1;
        for(int i=0;i<n;i++)
            if(points[i][0] == x || points[i][1] == y){
                Manhattan = abs(x - points[i][0]) + abs(y - points[i][1]);
                if(Manhattan < min)
                    min = Manhattan,ans = i;
            }
        return ans;
    }
};
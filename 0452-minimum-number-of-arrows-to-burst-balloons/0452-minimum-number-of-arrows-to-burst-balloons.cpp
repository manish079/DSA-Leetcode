class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        sort(begin(points), end(points));
        
        vector<vector<int>> balloons_ans;
        balloons_ans.push_back(points[0]);
        
        for(int i = 1; i<n; i++) {
            int currStartPoint = points[i][0];
            int currEndPoint   = points[i][1];
            
            int prevStartPoint = balloons_ans.back()[0];
            int prevEndPoint   = balloons_ans.back()[1];
            
            if(currStartPoint > prevEndPoint) { //no overlap
                balloons_ans.push_back(points[i]);
            } else {
                //overlap case
                balloons_ans.back()[0] = max(prevStartPoint, currStartPoint);
                balloons_ans.back()[1] = min(prevEndPoint, currEndPoint);
            }
        }
        
        return balloons_ans.size();
    }  
};
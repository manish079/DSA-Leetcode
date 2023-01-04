class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
     
        unordered_map<int, int> m;
        int round = 0;
        
        for(int i=0; i<tasks.size(); i++)
            m[tasks[i]]++;
        
        for(auto it:m){
            int count = it.second;
            if(count < 2) // If tasks are not same difficulty level
               return -1;
            if(count == 2)  
                round++;
            else{
                round = round + ceil(double(count/3.0));
            }
        }
        
        return round;
    }
};
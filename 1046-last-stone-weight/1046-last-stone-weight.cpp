class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
             
        priority_queue<int> maxHeap;
        
        for(int i=0; i<stones.size(); i++)
            maxHeap.push(stones[i]);  //logn
        
        while(maxHeap.size() > 1){  //n
            
            int x = maxHeap.top(); 
            maxHeap.pop();    //logn
            int y = maxHeap.top();
            maxHeap.pop();
            
            maxHeap.push(abs(x-y));    
        }
        return maxHeap.top();
    }
};
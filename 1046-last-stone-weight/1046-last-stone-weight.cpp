class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
             
        priority_queue<int> maxHeap;
        
        for(int i=0; i<stones.size(); i++)
            maxHeap.push(stones[i]);  
        
        
        //insertion and deletion take logn time 
        
        while(maxHeap.size() > 1){  
            
            int x = maxHeap.top(); 
            maxHeap.pop();    
            int y = maxHeap.top();
            maxHeap.pop();
            
            maxHeap.push(abs(x-y));    
        }
        return maxHeap.top();
    }
    
    //Time complexity
    // n*(3*logn)=> (nlogn)
};
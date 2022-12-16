class MyQueue {
public:
        stack<int> input;
        stack<int> output;
        int peek_value = -1;
    
    MyQueue() {
       
    }
    
    void push(int x) {
        if(input.empty()){
            peek_value = x;
        }
        input.push(x);
    }
    
    int pop() {
      
        if(output.empty()){
            // o(n)
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        }
       int temp = output.top();  //O(1)
        output.pop();
        return temp;
    }
    
    int peek() {
        if(output.empty()){
            return peek_value;
        }
        return output.top();
    }
    
    bool empty() {
        if(input.empty() && output.empty())
            return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
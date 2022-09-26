class MyCircularQueue {

        int front=-1;
        int rear=-1;
        int queue[];
         int cap;
    public MyCircularQueue(int k) {
        queue= new int[k];
        cap=k;
    }
    
    public boolean enQueue(int value) {
        if(isFull()){
            return false;
        }
        
        if(front==-1 && rear==-1){
            front=0;
            rear=0;
            queue[rear]=value;
        }
        else if(rear+1==cap){
            
            rear=0;
            queue[rear]=value;
        }
        else{
            rear++;
            queue[rear] = value;
        }
        return true;
    }
    
    public boolean deQueue() {
        if(isEmpty())
            return false;
        //only one element
        if(front==rear){
           front=rear=-1;
        }
        else if(rear!=0 && front+1==cap){
            front=0;
        }
        else{
            front++;
        }
        return true;
    }
    
    public int Front() {
        if(isEmpty())
            return -1;
        else
            return queue[front%cap];
    }
    
    public int Rear() {
       if(isEmpty())
            return -1;
        else
            return queue[rear];
    }
    
    public boolean isEmpty() {
        if(front==-1)
            return true;
        return false;
    }
    
    public boolean isFull() {
         if((front==0 && (rear+1==cap)) || rear+1==front){
            return true;
        }
        return false;
    }
}

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue obj = new MyCircularQueue(k);
 * boolean param_1 = obj.enQueue(value);
 * boolean param_2 = obj.deQueue();
 * int param_3 = obj.Front();
 * int param_4 = obj.Rear();
 * boolean param_5 = obj.isEmpty();
 * boolean param_6 = obj.isFull();
 */
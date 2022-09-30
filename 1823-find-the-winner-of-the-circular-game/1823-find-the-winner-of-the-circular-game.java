class Solution {
    public int findTheWinner(int n, int k) {
        
        ArrayList<Integer> list = new ArrayList<>();
        int del_pos=0;
        
        for(int i=0; i<n; i++){
            list.add(i+1);
        }
        
        while(list.size()!=1){
            del_pos = (del_pos+k-1)%list.size();
            list.remove(del_pos);
        }
        return list.get(0);
    }
}
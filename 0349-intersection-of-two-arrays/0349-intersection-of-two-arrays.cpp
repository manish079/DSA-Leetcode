class Solution {
public:
    
    bool isPresentEle(vector<int> v, int ele){
        for(int i=0; i<v.size(); i++)
            if(v[i]==ele)
                return true;
        return false;
    }
    
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> temp;
        unordered_set<int> s;
        vector<int> ans(s.begin(), s.end());

 
        for(int i=0; i<nums2.size(); i++){
            if(isPresentEle(nums1, nums2[i]))
                temp.push_back(nums2[i]);
        }
        //Now find unique ele
        for(int i=0; i<temp.size(); i++){
            if(s.find(temp[i])==s.end()){
                s.insert(temp[i]);
            }
        }
        
        for(auto &it : s){
            ans.push_back(it);
        }
        
        return ans;
    }
};
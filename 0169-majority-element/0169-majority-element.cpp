class Solution
{
    public:
        int majorityElement(vector<int> &nums)
        {
           	//         int count = 1;

           	//         sort(nums.begin(), nums.end());

           	//        for(int i=0; i < nums.size()-1; i++){
           	//            if(nums[i]==nums[i+1]){
           	//                count++;

           	//                if(count > nums.size()/2)
           	//                    return nums[i];
           	//            }
           	//            else{
           	//                count = 1;
           	//            }
           	//        }
           	//              return 1;

            
            //boys moore algo, O(N)
            int vote = 1;
            int majEle = nums[0];

            for (int i = 0; i < nums.size(); i++)
            {
                int res = nums[i];
                if (nums[i] == majEle)
                {
                    vote++;  //current party leading
                }
                else
                {
                    vote--;  //current part loosing
                }
                
                if(vote == 0){    //new party in lead
                    vote = 1;
                    majEle = res; 
                }
            }
            return majEle;
        }
};
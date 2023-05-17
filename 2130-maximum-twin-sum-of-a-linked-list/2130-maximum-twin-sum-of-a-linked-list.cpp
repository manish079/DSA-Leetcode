/**
 *Definition for singly-linked list.
 *struct ListNode {
 *int val;
 *ListNode * next;
 *ListNode() : val(0), next(nullptr) {}
 *ListNode(int x) : val(x), next(nullptr) {}
 *ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        int pairSum(ListNode *head)
        {

            int max = INT_MIN;

            vector<int> vec;

            ListNode *ptr = head;

           	//Pushing all nodes val into vector
            while (ptr != NULL)
            {
                vec.push_back(ptr->val);
                ptr = ptr->next;
            }

           	//traverse in vector

            for (int i = 0; i <= vec.size() / 2 - 1; i++)
            {

                int twin = vec[i] + vec[vec.size() - 1 - i];

                if (twin > max)
                    max = twin;
            }
            
                return max;

        }
    
};
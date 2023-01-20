/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        if(root==NULL)
            return vector<int>();
        stack<Node*> st;
        Node *p=root;
        st.push(p);
        list<int> res;
        while(!st.empty()){
            p=st.top();
            st.pop();
            res.push_front(p->val);
            for(int i=0;i<p->children.size();++i)
                st.push(p->children[i]);
        }
        return vector<int>(res.begin(),res.end());
    }
};
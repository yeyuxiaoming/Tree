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
/*N�����Ĳ�α���������һ�� N ������������ڵ�ֵ�Ĳ�����������������ң�����������*/
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node*> que;
        que.push(root);
        vector<vector<int>> res;
        if(!root) return res;
        while(!que.empty()) {
            int size = que.size();
            vector<int> vec;
            for(int i = 0; i < size; i++) {
                Node* node = que.front();
                que.pop();
                vec.push_back(node->val);
                for(int i = 0; i < node->children.size(); i++) {
                    if(node->children[i]) que.push(node->children[i]);
                }
            }
            res.push_back(vec);
        }
        return res;
    }
};

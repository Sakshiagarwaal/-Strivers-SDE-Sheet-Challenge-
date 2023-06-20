/*
time:O()
space:O()*/


/*CODE*/

#include <bits/stdc++.h> 
class BSTiterator
{
    private:
    stack<TreeNode<int>*> st;
    public:
    BSTiterator(TreeNode<int> *root)
    {
        // write your code here
        pushAll(root);
    }

    int next()
    {
        // write your code here
        TreeNode<int> * temp = st.top();
        st.pop();
        pushAll(temp->right);

        return temp->data;
    }

    bool hasNext()
    {
        // write your code here
        return !st.empty();
    }


    void pushAll(TreeNode<int> * root){
   for(;root!=NULL ;st.push(root),root=root->left);
    }
};
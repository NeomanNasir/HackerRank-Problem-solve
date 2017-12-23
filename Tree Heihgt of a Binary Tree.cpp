/*The tree node has data, left child and right child
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        if(root == NULL)
            return -1; ///single node has height 0 here
                       ///if single node has defined height 1 then it will returning 0

        int l_ht = height(root->left);
        int r_ht = height(root->right);

        return 1 + max(l_ht, r_ht);
    }

/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void go_left(node *temp)
{
    if(temp->left != NULL)
        go_left(temp->left);

    cout <<temp->data<< " ";

    return;
}

void go_right(node *temp)
{
    cout <<temp->data << " ";

    if(temp->right != NULL)
        go_right(temp->right);

    return;
}

void topView(node * root) {
    if(root->left != NULL)
        go_left(root->left);

    cout <<root->data << " ";

    if(root->right != NULL)
        go_right(root->right);

}


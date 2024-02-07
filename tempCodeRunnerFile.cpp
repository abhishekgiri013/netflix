class node{
    int data;
    node*left ;;
    node*right;

    //construtor

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node*buildTree(node*root)
{
    cout << "enter the data " << endl;
    int data;
    cin >> data;
    root = new node(data);


    if(data == -1)
    {
        return NULL;
    }
    cout << "enter data for inserting in left of" <<data << endl;
    root->left = buildTree(root->left);

      cout << "enter data for inserting in right of" <<data << endl;
      root->right = buildTree(root->right);


      return root;

}



int main(){
    node*root = NULL;

  // creating tree

   root = buildTree(root);
}
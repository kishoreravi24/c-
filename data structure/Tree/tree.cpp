#include<bits/stdc++.h>
 int sum=0;
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}node;
node *newnode(int data)
{
    node *temp=(node *)malloc(sizeof(node *));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
}
node* insert(struct node *root,int data)
{
    if(root==NULL)
    {
        newnode(data);
    }
    else if(data<root->data)
    {
        root->left=insert(root->left,data);
    }
    else if(data>root->data)
    {
        root->right=insert(root->right,data);
    }
}
int print(node *root)
{
     if(root!=NULL)
    {
    print(root->left);
    std::cout<<root->data<<" ";
    print(root->right);
    }
}
int check_height(node *root)
{
    if(root==NULL)
    {
        sum=0;
    }
    else{
    int left_side=check_height(root->left);
    int right_side=check_height(root->right);
        if(left_side>right_side)
        {
            sum=left_side;
        }
        else{
            sum=right_side;
        }
    }
    std::cout<<sum;
}
int main()
{
    node *root=NULL;
    int number,i,data;
    std::cin>>number;
    for(i=0;i<number;i++)
    {
        std::cin>>data;
        root=insert(root,data);
    }
    check_height(root);
    std::cout<<"\n";
    print(root);
}
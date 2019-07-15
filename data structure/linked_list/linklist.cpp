#include<bits/stdc++.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
bool search(node *head,int target)
{
    while(head!=NULL)
    {
        if(head->data==target)
        {
            return true;
        }
        head=head->next;
    }
    return false;
}
int print(node *head)
{
    while(head!=NULL)
    {
        std::cout<<head->data<<" ";
        head=head->next;
    }
}
int delete_list(node *head,int target)
{
    while(head!=NULL)
    {
        if(head->data==target)
        {
            node *temp=head;
            free(temp);
            head=head->next;
        }
        head=head->next;
        
    }
}
int main()
{
    node *head=NULL;
    int no_of_nodes,i;
    std::cin>>no_of_nodes;
    for(i=0;i<no_of_nodes;i++)
    {
        node *temp=(node *)malloc(sizeof(node *));
        node *temp1=head;
        std::cin>>temp->data;
        if(head==NULL)
        {
            head=temp;
        }
        else
        {
            while(temp1->next!=NULL)
            {
                temp1=temp1->next;
            }
            temp1->next=temp;
        }
    }
    print(head);
    std::cout<<"\n";
    bool val=search(head,30);
    if(val==true)
    {
        std::cout<<"The target value 30 finded";
    }
    else{
        std::cout<<"The target value 30 not finded";
    }
    delete_list(head,40);
    std::cout<<"\n";
    print(head);
}
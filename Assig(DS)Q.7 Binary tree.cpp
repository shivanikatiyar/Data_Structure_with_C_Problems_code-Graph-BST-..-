#include<iostream>
#include<queue>
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}*root=NULL;
void insertBT()
{
    int data;
    queue<Node*> q;
    printf("\n Enter root Data :");
    scanf("%d",&data);
    struct Node* temp = new Node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    root=temp;
    q.push(root);
    while(!q.empty())
    {
        struct Node* f = q.front();
        q.pop();
        int leftData;
        printf("Enter left child of (-1 for No child):%d",f->data);
        scanf("%d",&leftData);
        if(leftData!=-1)
        {
            struct Node* leftChild = new Node;
            leftChild->data = leftData;
            leftChild->left = leftChild->right = NULL;
            q.push(leftChild);
            f->left = leftChild;
        }
        int rightData;
        printf("\n Enter the right child of (-1 for No child ):%d",f->data);
        scanf("%d",rightData);
        if(rightData!=-1)
        {
            struct Node* rightChild = new Node;
            rightChild->data = rightData;
            rightChild->left = rightChild->right = NULL;
            q.push(rightChild);
            f->right = rightChild;
        }
    }
}

void preOrder(Node* root)
{
    if(root!=NULL){
    printf("%d",root->data);
    preOrder(root->left);
    preOrder(root->right);
    }
}
void postOrder(Node* root)
{
    if(root!=NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d",root->data);
    }
}
void inOrder(Node* root)
{
    if(root!=NULL)
    {
        inOrder(root->left);
        printf("%d",root->data);
        inOrder(root->right);
    }
}
int searchElementInBT(Node* p,int key)
{
    if(p==NULL)
        return 0;
    if(p->data==key)
        return 1;
    return (searchElementInBT(p->left,key)||searchElementInBT(p->right,key));

}
int main()
{
    int choice;
    printf("\n1.creating Binary Tree");
    printf("2.Pre-order Traversal");
    printf("3. for In-Order Traversal");
    printf("4. Post-Order Traversal");
    printf("5. search an Element");
    printf("6.Exit\n");
    while(1)
    {
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
             insertBT();
            break;
        case 2:
            preOrder(root);
            break;
        case 3:
            inOrder(root);
            break;
        case 4:
            postOrder(root);
            break;
        case 5:
            int item;
            printf(" Enter the item to be searched  : ");
            scanf("%d",&item);
            printf("\n");
            if(searchElementInBT(root,item))
                printf("Element is Found \n");
            else
                printf("Element is not Found\n");
        case 6:
            exit(0);
        default:
            printf("Wrong choice\n");
            break;
        }
    }
    return 0;
}

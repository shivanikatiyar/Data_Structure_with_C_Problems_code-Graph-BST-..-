#include<stdio.h>           // Stack using pointer
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *newnode,*top=0,*temp=0;

void push();
void pop();
void dis();

void main()
{
    int i;
  while(1)
  {
      printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
      printf("\nEnter choice :");
      scanf("%d",&i);
      switch(i)
      {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        dis();
        break;
    case 4:
        exit(1);
        break;
    default :
        printf("\nInvalid choice");

      }
  }
}
void push()
{
   int x;
   printf("\nEnter the element :");
   scanf("%d",&x);
   newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=x;
   newnode->next=top;
   top=newnode;
}
void pop()
{
    temp=top;
    if(top==0)
    {
        printf("Overflow");
    }
    else
    {
        printf("\nPop element is : %d\n",top->data);
        top=top->next;
        free(temp);
    }
}
void dis()
{
   temp=top;
    if(top==0)
    {
        printf("Overflow");
    }
    else
    {
        printf("Element stack:");
        while(temp!=0)
        {
            printf("\n %d",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}

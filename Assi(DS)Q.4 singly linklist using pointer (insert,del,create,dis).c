#include<stdio.h>                 // Linked list using pointer
#include<stdlib.h>
struct node
{
   int data;
   struct node *next;
};
struct node *newnode,*temp,*head,*nextnode;
int pos,count=0,i=1;

void create();
void insert();
void del();
void dis();

void main()
{
    int i;
    while(1)
    {
        printf("\n1.Create\n2.Insert\n3.Delete\n4.Display\n5.Exit");
        printf("\nEnter your Choice : ");
        scanf("%d",&i);
        switch(i)
        {
       case 1:
           create();
           break;
       case 2:
            insert();
            break;
       case 3:
            del();
            break;
       case 4:
           dis();
           break;
       case 5:
           exit(1);
           break;
       default :
          printf("Invalid choice");
        }
    }
}
void create()
{ int choice;
    head=0;
    while(choice)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data :");
    scanf("%d",&newnode->data);
    newnode->next=0;
    count++;
    if(head==0)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
    printf("Do you want to continue(0,1): ");
    scanf("%d",&choice);

}
}
void insert()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n Which position insert at element : ");
    scanf("%d",&pos);
    if(pos>count)
    {
        printf("Invalid position");
    }
    else
    {
        temp=head;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }

    }
    printf("\nWhich element Insert: ");
    scanf("%d",&newnode->data);
    newnode->next=temp->next;
    temp->next=newnode;
}
void del()
{
    printf("\n Which position Delete at element: ");
    scanf("%d",&pos);
    if(pos>count)
    {
        printf("Invalid position");
    }
    else
    {
        temp=head;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        nextnode=temp->next;
        temp->next=nextnode->next;
        free(nextnode);
    }
}
void dis()
{
    temp=head;
    while(temp!=0)
    {
        printf(" %d",temp->data);
        temp=temp->next;
    }
}

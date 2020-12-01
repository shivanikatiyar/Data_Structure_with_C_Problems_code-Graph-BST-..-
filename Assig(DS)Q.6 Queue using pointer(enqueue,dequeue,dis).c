#include<stdio.h>               // Queue using pointer
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{ int choice;
 while(1)
{
printf("\n1.Enqueue in Queue\n2.Display Queue\n3.Dequeue in Queue\n4.Exit\n");
printf("enter your choice :");
scanf("%d",&choice);
switch(choice)
{
case 1:
    enqueue();
    break;
case 2:
    display();
    break;
case 3:
    dequeue();
       break;
case 4:
    exit(1);
    break;
default :
    printf("Invalid choice");
}
}
    return 0;
}

struct node *front=0;
struct node *rear=0;
struct node *temp,*newnode;

void enqueue()
{
int choice=1;
while(choice)
{
newnode=(struct node*)malloc(sizeof (struct node));
printf("Enter data in queue:");
scanf("%d",&newnode->data);
newnode->next=0;
if(front==0&&rear==0)
{
  rear=front=newnode;

}
else
{
    rear->next=newnode;
    rear=newnode;
}
printf("Do you want to continue(0,1)?");
scanf("%d",&choice);
}
}
void display()
{

if(front==0&&rear==0)

{
    printf("Queue is Empty\n");
}
else
{   printf("\nElement of queue are :");
    temp=front;
    while(temp!=rear)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}
}
void dequeue()
{
    temp=front;
    if(front==0&&rear==0)

    {
        printf("Queue is Empty\n");
    }
    else
    {
        front=front->next;
        free(temp);
    }
}

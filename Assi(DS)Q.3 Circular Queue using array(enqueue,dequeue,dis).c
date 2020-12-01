#include<stdio.h>                 // Circular Queue using array
#include<stdlib.h>
# define n 7
int queue[n],front=-1,rear=-1;
int main()
{
 int choice;
 while(1)
{
printf("\n1.Enqueue element in queue\n2.Display Queue\n3.Dequeue element in Queue\n4.Exit\n");
printf("Enter your choice :");
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
void enqueue()
{
    int x;
    printf("\nEnter data in queue :");
    scanf("%d",&x);
    if((rear+1)%n==front)
    {
        printf("\nQueue is full\n");
    }
    else if(rear==-1 &&front==-1)
    {
        rear=front=0;
        queue[rear]=x;
    }
    else
    {
        rear=(rear+1)%n;
        queue[rear]=x;
    }
}
void display()
{   int i;
    i=front;
    printf("Queue elements are :\n");
    if(front==-1&&rear==-1)
    {
        printf("\nQueue is Empty\n");
    }
    else
    {
    while(i!=rear)
    {
        printf("%d ",queue[i]);
     i=(i+1)%n;

    }
    printf(" %d",queue[rear]);
    }
}
void dequeue()
{
    if(front==-1&&rear==-1)
    {
        printf("Underflow");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front=(front+1)%n;
    }
}


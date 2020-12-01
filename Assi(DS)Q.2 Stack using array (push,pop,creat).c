#include<stdio.h>
#include<stdlib.h>                    // stack using array
int n,stack[20],i,ch,top,x,m;
void create();
void push();
void pop();
void dis();
void main()
{
    top=-1;
    printf("size of stack: ");
    scanf("%d",&n);

    while(1)
    {
    printf("\n1.Create\n2.Push\n3.Pop\n4.Display\n5.Exist");
    printf("\nEnter your choice :");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        create();
        break;
    case 2:
        push();
        break;
    case 3:
        pop();
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
{
    printf("\nEnter the size of array:");
    scanf("%d",&m);
   printf("\nEnter the element in stack:");
   for(i=0;i<n-m;i++)
   {
       scanf("%d",&stack[i]);
       top++;
   }
}
void push()
{
    if(top>=n-1)
        printf("\nStack is Full");
    else
    {
        printf("\nEnter the element which push in stack:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
        printf("Stack is Empty");
    else
    {
        top--;
        printf("%d",stack[top]);
    }

}
void dis()
{
    printf("\nStack is:");
    for(i=top;i>=0;i--)
        printf("\n%d",stack[i]);
}

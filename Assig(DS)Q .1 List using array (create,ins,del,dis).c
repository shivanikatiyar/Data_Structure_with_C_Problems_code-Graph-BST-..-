#include<stdio.h>                    // List using Array
#include<stdlib.h>
int n,a[20],x,pos,i,ch;
void create();
void insert();
void del();
void dis();
void main()
{
    while(1)
    {
    printf("\n1.Create\n2.Insert\n3.Delete\n4.Display\n5.Exist");
    printf("\nEnter your choice :");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        create();
        break;
    case 2:
        insert();
        break;
    case 3:
        del();
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
    scanf("%d",&n);
   printf("\nEnter the element in array:");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
}
void insert()
{
    printf("\nWhich position insert the element:");
    scanf("%d",&pos);
    printf("\nWhich element insert in array:");
    scanf("%d",&x);
    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=x;
    n++;
}
void del()
{
    printf("\nWhich position Delete the element:");
    scanf("%d",&pos);
    for(i=pos-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n--;
}
void dis()
{
    for(i=0;i<n;i++)
        printf(" %d",a[i]);
}

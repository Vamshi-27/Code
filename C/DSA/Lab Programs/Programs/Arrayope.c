//Array Operations

#include<stdio.h>
#include<stdlib.h>

int a[20],n,i;

void create()
{
    printf("Enter the array size:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}

void display()
{
    printf("The array elements are:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\n");
}

void insert()
{
    int pos,ele;
    printf("Enter the position and element to be inserted:\n");
    scanf("%d%d",&pos,&ele);
    if(pos<1 || pos>n)
    {
        printf("Invalid input\n");
        exit(0);
    }
    for(i=n-1;i>pos-1;i--)
        a[i+1]=a[i];
    a[pos-1]=ele;
    n=n+1;
}

void delete_ele()
{
    int pos;
    printf("Enter the position of the element to be deleted:\n");
    scanf("%d",&pos);
    if(pos<1 || pos>n)
    {
        printf("Invalid input\n");
        exit(0);
    }
    for(i=pos;i<n;i++)
        a[i-1]=a[i];
    n=n-1;
}

int main()
{
    int choice;
    while(1)
    {
        printf("Enter your choice\n1 for Create\n2 for Display\n3 for Insert\n4 for Delete\n5 for exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: create();
                    break;

            case 2: display();
                    break;

            case 3: insert();
                    break;

            case 4: delete_ele();
                    break;

            case 5: exit(0);

            default:printf("Invalid Input\n");
        }
    }
}
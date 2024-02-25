//create,display,insert,delete

#include<stdio.h>
#include<stdlib.h>
int a[20],n;

void create()
{
    printf("Enter the size of the array:\n");
    scanf("%d",&n);

    printf("Enter the array elements:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
}

void display()
{
    printf("The array elements are:\n");
    for(int i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}

void insert()
{
    int ele,pos;
    printf("Enter the element and position to insert:\n");
    scanf("%d %d",&ele,&pos);
    if(pos<1 || pos>n+1)
    {
        printf("Invalid position\n");
        return;
    }
    for(int i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=ele;
    n++;
}

void delete_Ele()
{
    int pos;
    printf("Enter the position to be deleted:\n");
    scanf("%d",&pos);
    if(pos<1 || pos>n)
    {
        printf("Invalid position\n");
        exit(0);
    }
    for(int i=pos;i<n;i++)
    {
        a[i-1]=a[i];
    }
    n=n-1;
}

int main()
{
    int choice;
    while(1)
    {
        printf("1.Create\n2.Display\n3.Insert\n4.Delete\n5.Exit\nEnter your choice:\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: create();
                    break;
            case 2: display();
                    break;
            case 3: insert();
                    break;
            case 4: delete_Ele();
                    break;
            case 5: exit(0);
                    break;
            default:printf("Invalid choice");
        }
    }
    return 0;
}

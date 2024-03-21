#include<stdio.h>
#include<stdlib.h>

struct SLL
{
    int sem;
    char usn[11],name[20],branch[20],phno[11];
    struct SLL *next;
};
typedef struct SLL node;
node *start=NULL;

node *getnode()
{
    node *newnode;
    newnode=(node*)malloc(sizeof(node));
    printf("Enter the usn,name,branch,sem,phone_no of the student:\n");
    scanf("%s",newnode->usn);
    scanf("%s",newnode->name);
    scanf("%s",newnode->branch);
    scanf("%d",&newnode->sem);
    scanf("%s",newnode->phno);
    newnode->next=NULL;
    return newnode;
}

void insertbegin()
{
    node *newnode;
    newnode=getnode();
    if(start==NULL)
        start=newnode;
    else
    {
        newnode->next=start;
        start=newnode;
    }
}

void insertend()
{
    node *newnode=getnode();
    node *temp=start;
    if(start==NULL)
        start=newnode;
    else
    {
        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}

void deletebegin()
{
    node *temp=start;
    if(start==NULL)
        printf("List is empty\n");
    else
    {
        printf("Deleted node is %s\n",temp->usn);
        start=temp->next;
        free(temp);
    }
}

void deleteend()
{
    node *temp=start;
    node *prev;
    if(start==NULL)
        printf("List is empty\n");
    else if(start->next==NULL)
    {
        printf("Deleted node is %s\n",temp->usn);
        start=NULL;
        free(temp);
    }
    else
    {
        while(temp->next!=NULL)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        printf("Deleted node is %s\n",temp->usn);
        free(temp);
    }
}

void display()
{
    node *temp=start;
    int count=0;
    if(start==NULL)
        printf("List is empty\n");
    else
    {
        printf("Student details are:\n");
        while(temp!=NULL)
        {
            printf("%s\t%s\t%s\t%d\t%s\n",temp->usn,temp->name,temp->branch,temp->sem,temp->phno);
            temp=temp->next;
            count++;
        }
        printf("Count=%d\n",count);
    }
}

int main()
{
    int i,n,ch;
    while(1)
    {
        printf("1.InsertBegin\n2.InsertEnd\n3.DeleteBegin\n4.DeleteEnd\n5.Display\n6.Exit\nEnter your choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    printf("Enter the number of students:\n");
                    scanf("%d",&n);
                    for(i=0;i<n;i++)
                        insertbegin();
                    break;

            case 2:
                    insertend();
                    break;

            case 3:
                    deletebegin();
                    break;

            case 4:
                    deleteend();
                    break;
            
            case 5:
                    display();
                    break;

            case 6:
                    exit(0);

            default:
                    printf("Invalid choice\n");
        }
    }
}
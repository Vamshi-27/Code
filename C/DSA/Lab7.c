//Singly Linked List Operations

#include<stdio.h>
#include<stdlib.h>

struct SLL
{
  int sem;
  char usn[11],name[20],branch[20],phone[11];
  struct SLL *next;
};
typedef struct SLL node;
node *start=NULL;

node* getnode()
{
  node *newnode;
  newnode=(node*)malloc(sizeof(node));
  printf("Enter the student details USN,Name,Branch,Sem,Phone_no:\n");
  scanf("%s%s%s%d%s",newnode->usn,newnode->name,newnode->branch,&newnode->sem,newnode->phone);
  newnode->next=NULL;
  return newnode;
}

void insertbegin()
{
  node *newnode=getnode();

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
    printf("Linked list is empty\n");
  else
  {
    printf("Deleted node is %s\n",temp->usn);
    start=temp->next;
    free(temp);
  }
}

void deleteend() {
  node *temp=start,*prev;

  if(start==NULL)
    printf("List is empty.\n");
  if(start->next==NULL)
  {
    printf("Deleted node is %s\n",temp->usn);
    start=NULL;
    free(temp);
  }
  else
  {
    while(temp->next != NULL)
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
    printf("List elements are:\n");
    while(temp != NULL)
    {
      printf("%s\n",temp->usn);
      temp=temp->next;
      count++;
    }
    printf("Count=%d\n",count);
  }
}

int main()
{
  int choice, n, i;

  while(1)
  {
    printf("Enter your choice\n1 for InsertBegin\n2 for InsertEnd\n3 for DeleteBegin\n4 for DeleteEnd\n5 for Display\n6 for Exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
            printf("Enter the no. students:\n");
            scanf("%d", &n);
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
            printf("Invalid choice.\n");
    }
  }

  return 0;
}

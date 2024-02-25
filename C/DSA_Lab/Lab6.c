//Queue Operations

#include <stdio.h>
#include <stdlib.h>
#define max 5

char q[max];
int rear=-1,front=0,count=0;

void enqueue()
{
  char ele;
  if (count==max)
    printf("Queue overflow\n");
  else
  {
    printf("Enter the element to be inserted:\n");
    scanf(" %c",&ele);
    rear=(rear+1) % max;
    q[rear]=ele;
    count++;
  }
}

void dequeue()
{
  if(count==0)
    printf("Queue underflow\n");
  else
  {
    printf("Deleted item is %c\n", q[front]);
    front=(front+1) % max;
    count--;
  }
}

void display()
{
  int i,j;
  if(count==0)
    printf("Queue is Empty\n");
  else
  {
    i=front;
    for(j=0;j<count;j++)
    {
      printf("%c\t",q[i]);
      i=(i+1) % max;
    }
    printf("\n");
  }
}

int main()
{
  int choice;
  while (1)
  {
    printf("Enter your choice\n1 for Enqueue\n2 for Dequeue\n3 for Display\n4 for Exit\n");
    scanf("%d",&choice);
    switch (choice)
    {
      case 1:
            enqueue();
            break;
      case 2:
            dequeue();
            break;
      case 3:
            display();
            break;
      case 4:
            exit(0);
      default:
            printf("Invalid Input\n");
    }
  }
  return 0;
}
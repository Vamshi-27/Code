//Hashing using linear probing

#include<stdio.h>
#include<stdlib.h>
#define m 5

int a[m];

void display()
{
    int i;
    printf("Hash table contents are:\n");
    printf("Index\tData\n");
    for(i=0;i<m;i++)
        printf("%d\t%d\n",i,a[i]);
}

void linear_probe(int key,int index)
{
    int i;
    if(a[index]==-1)
    {
        a[index]=key;
        return;
    }
    printf("Collision\n");
    i=index;
    do
    {
        i=(i+1)%m;
        if(a[i]==-1)
        {
            printf("Collision is resolved by linear probing technique\n");
            a[i]=key;
            return;
        }
    }
    while(i != index);
    printf("Hash table is full\n");
}

int main()
{
    int i,key,index,input;
    for(i=0;i<m;i++)
        a[i]=-1;
    
    do
    {
        printf("Enter the key:\n");
        scanf("%d",&key);
        index=key%m;
        linear_probe(key,index);
        display();
        printf("Enter 1 to continue or 0 to exit\n");
        scanf("%d",&input);
    }
    while(input==1);
    return 0;
}
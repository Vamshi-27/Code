//Tower of Hanoi

#include<stdio.h>

int count=0;
void TOH(int n,char s,char t,char d)
{
    if(n==1)
    {
        printf("Mover from %c to %c\n",s,d);
        count++;
    }
    else
    {
        TOH(n-1,s,d,t);
        printf("Move from %c to %c\n",s,d);
        count++;
        TOH(n-1,t,s,d);
    }
}

int main()
{
    int n;
    printf("Enter the number of disks:\n");
    scanf("%d",&n);
    TOH(n,'S','T','D');
    printf("Number of moves is %d\n",count);
    return 0;
}
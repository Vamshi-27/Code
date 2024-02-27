//BFS and DFS

#include<stdio.h>

int a[10][10],n,visited[10];

void dfs(int s)
{
    int i;
    visited[s]=1;
    printf("%d\t",s);
    for(i=1;i<=n;i++)
    {
        if(a[s][i]==1 && visited[i]==0)
        {
            dfs(i);
        }
    }
    printf("\n");
}

void bfs(int s)
{
    int i,f=0,r=-1,q[n];
    visited[s]=1;
    while(1)
    {
        printf("%d-->",s);
        for(i=0;i<n;i++)
        {
            if(a[s][i]==1 && visited[i]==0)
            {
                visited[i]=1;
                q[++r]=i;
            }
        }
        if(f>r)
            return;
        s=q[f++];
    }
}

int main()
{
    int i,j,s;
    printf("Enter the no of nodes:\n");
    scanf("%d",&n);
    printf("Enter the graph in adjacency matrix format:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
        visited[i]=0;
    printf("Enter the source/starting node:\n");
    scanf("%d",&s);
    printf("DFS Traversal:\n");
    dfs(s);
    for(i=0;i<n;i++)
        visited[i]=0;
    printf("BFS Traversal:\n");
    bfs(s);
    return 0;
}
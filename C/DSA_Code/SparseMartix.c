#include <stdio.h>
#include <stdlib.h>

struct Sparse
{
    int row, column, val;
};
struct Sparse s[10];

void read(struct Sparse a[])
{
    int m, n, ele, i, j, pos = 1;
    printf("Enter number of rows and columns of sparse matrix:\n");
    scanf("%d %d", &m, &n);
    printf("Enter the elements:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &ele);
            if (ele != 0)
            {
                a[pos].row = i;
                a[pos].column = j;
                a[pos].val = ele;
                pos++;
            }
        }
    }
    a[0].row = m;
    a[0].column = n;
    a[0].val = pos - 1;
}

void print(struct Sparse a[])
{
    int i, j, pos = 1;
    printf("The sparse matrix is:\n");
    for (i = 0; i < a[0].row; i++)
    {
        for (j = 0; j < a[0].column; j++)
        {
            if (a[pos].row == i && a[pos].column == j)
            {
                printf("%d ", a[pos].val);
                pos++;
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

void search(struct Sparse a[])
{
    int key, i;
    printf("Enter element to search: ");
    scanf("%d", &key);
    for (i = 0; i < a[0].val; i++)
    {
        if (a[i].val == key)
        {
            printf("Element %d found at row %d column %d\n", key, a[i].row+1, a[i].column+1);
        }
    }
}

void transpose(struct Sparse a[], struct Sparse b[])
{
    int pos = 1, i, j;
    b[0].row = a[0].column;
    b[0].column = a[0].row;
    b[0].val = a[0].val;
    printf("The transpose is:\n");

    for (i = 0; i < a[0].column; i++)
    {
        for (j = 1; j <= a[0].val; j++)
        {
            if (a[j].column == i)
            {
                b[pos].column = a[j].row;
                b[pos].row = a[j].column;
                b[pos].val = a[j].val;
                pos++;
            }
        }
    }
}

void main()
{
    int choice;
    struct Sparse a[10], b[10];
    read(a);
    print(a);
    search(a);
    transpose(a, b);
    print(b);
}

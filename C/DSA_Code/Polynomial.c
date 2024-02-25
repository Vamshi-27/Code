#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Poly
{
    int coeff;
    int expo;
};

void read(struct Poly p[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter coefficient and exponent:\n");
        scanf("%d %d", &p[i].coeff, &p[i].expo);
    }
}

void print(struct Poly p[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (p[i].expo == 0)
        {
            printf("%d ", p[i].coeff);
        }
        else
        {
            printf("%d x^%d + ", p[i].coeff, p[i].expo);
        }
    }
    printf("\n");
}

int addpoly(struct Poly p1[], struct Poly p2[], struct Poly p3[], int n1, int n2)
{
    int i, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (p1[i].expo == p2[j].expo)
        {
            p3[k].coeff = p1[i].coeff + p2[j].coeff;
            p3[k].expo = p1[i].expo;
            i++;
            j++;
            k++;
        }
        else if (p1[i].expo > p2[j].expo)
        {
            p3[k] = p1[i];
            i++;
            k++;
        }
        else
        {
            p3[k] = p2[j];
            j++;
            k++;
        }
    }

    while (i < n1)
    {
        p3[k] = p1[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        p3[k] = p2[j];
        j++;
        k++;
    }
    return k;
}

int simplify(struct Poly a[], int n)
{
    int x, sum = 0, i;
    printf("Enter the value of x:\n");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        sum += a[i].coeff * pow(x, a[i].expo);
    }
    return sum;
}

void main()
{
    int n1, n2, n3;
    struct Poly p1[10], p2[10], p3[10];

    printf("Enter number of terms in first polynomial:\n");
    scanf("%d", &n1);

    printf("Enter number of terms in second polynomial:\n");
    scanf("%d", &n2);

    read(p1, n1);
    print(p1, n1);

    read(p2, n2);
    print(p2, n2);

    n3 = addpoly(p1, p2, p3, n1, n2);

    print(p3, n3);

    int result = simplify(p3, n3);
    printf("Result of polynomial evaluation is: %d\n", result);
}

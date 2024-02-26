// C program to check Armstrong number
//Ex: 153=1^3+5^3+3^3

#include <stdio.h>
#include <math.h>

int main()
{
    int n, temp, sum = 0;
    printf("Enter a number:\n");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        sum += pow(n % 10, 3);
        n /= 10;
    }
    if (temp == sum)
        printf("%d is an Armstrong number.", temp);
    else
        printf("%d is not an Armstrong number.", temp);
    return 0;
}
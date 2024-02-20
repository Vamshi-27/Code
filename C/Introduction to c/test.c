#include <stdio.h>

int main()
{
    int num, originalNum, reversedNum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // reverse the number
    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // check if reversed number is equal to original number
    if (originalNum == reversedNum)
    {
        printf("%d is a palindrome.", originalNum);
    }
    else
    {
        printf("%d is not a palindrome.", originalNum);
    }

    return 0;
}

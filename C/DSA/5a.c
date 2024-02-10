//Postfix Evaluation

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

char stack[20];
int top=-1;

void push(char sym)
{
    stack[++top]=sym;
}

char pop()
{
    return (stack[top--]);
}

void evaluate(char postfix[50])
{
    int i;
    char symbol;
    float op1,op2,res;
    for(i=0;i<strlen(postfix);i++)
    {
        symbol=postfix[i];
        if(isdigit(symbol))
            push(symbol-'0');
        else
        {
            op2=pop();
            op1=pop();
            switch(symbol)
            {
                case '+':push(op1+op2);
                        break;

                case '-':push(op1-op2);
                        break;

                case '*':push(op1*op2);
                        break;

                case '/':push(op1/op2);
                
                case '^':push(pow(op1,op2));
                        break;

                default:printf("Invalid\n");
                        exit(0);
            }
        }
    }
    res=pop();
    printf("%f\n",res);
}

int main()
{
    char postfix[50];
    printf("Enter the postfix expression:\n");
    scanf("%s",postfix);
    evaluate(postfix);
    return 0;
}
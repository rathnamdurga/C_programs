#include <stdio.h>
#include <math.h>
#include <ctype.h>
int stack[100];
int top = -1;
void push(int x)
{
    top++;
    stack[top] = x;
}
int pop()
{
    return stack[top--];
}
int perform(int p2, char k, int p1)
{
    switch (k)
    {
    case '+':
        return p2 + p1;
        break;
    case '-':
        return p2 - p1;
        break;
    case '*':
        return p2 * p1;
        break;
    case '/':
        return p2 / p1;
        break;
    case '^':
        return pow(p2, p1);
        break;
    }
}
void main()
{
    char a[100], *s;
    int p1, p2, y;
    printf("Enter the postfix expression:");
    scanf("%s", a);
    s = a;
    while (*s != '\0')
    {
        if (isalnum(*s))
        {
            push(*s - 48);
        }
        else if (*s == '+' || *s == '-' || *s == '*' || *s == '/' || *s == '^')
        {
            p1 = pop();
            p2 = pop();
            y = perform(p2, *s, p1);
            push(y);
        }
        s++;
    }
    printf("The value of the expression is :%d", stack[0]);
}

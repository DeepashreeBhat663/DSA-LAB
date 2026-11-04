#include <stdio.h>
#define MAX 20
int stack[MAX];
int top = -1;
long fact_stack(int n)
{
    long result = 1;
    while (n > 1) 
        stack[++top] = n--;
    while (top != -1) 
        result = result * stack[top--];
    return result;
}
long fact_recursive(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact_recursive(n - 1); 
}
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0 || n >= MAX) {
        printf("Enter a number from 0 to %d\n", MAX - 1);
    return 1;
}
    printf("Factorial using stack = %ld\n", fact_stack(n));
    printf("Factorial using recursion = %ld\n", fact_recursive(n));
    return 0;
}
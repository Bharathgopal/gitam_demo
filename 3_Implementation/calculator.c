#include <stdio.h>

int main() 
{
    int num1, num2;
    int result;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    result = num1 + num2;

    printf("Sum of %d and %d is %d\n", num1, num2, result);
    return 0;
}
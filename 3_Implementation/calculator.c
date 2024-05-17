#include <stdio.h>

int division(int num1, int num2)
{
    int result = 0;

    if (num2 != 0)
    {
        result = num1 / num2;
    }
    return result;
}

int main() 
{
    int num1, num2, num3;
    int result;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    result = num1 + num2 + num3;

    printf("%d + %d + %d = %d\n", num1, num2, num3, result);
    return 0;
}
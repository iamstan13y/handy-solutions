#include <stdio.h>

int main()
{

    int x, input;

    printf("Enter The Limit:\n");
    scanf("%d", &input);

    for (x = 0; x <= input; x++)
    {
        printf("%d\n", fibonacci(x));
    }
}

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Factorial of any integer
#include <stdio.h>

int main()
{
    int resp = 1, fat;

    printf("Fatorial de um numero\n\n");

    printf("Digite um numero: ");
    scanf("%i", &fat);

    for (; fat >= 1; --fat)
    {
        resp = resp * fat;
    }

    printf("%i\n", resp);

    return 0;
}

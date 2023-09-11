#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main()
{
    int x;
    scanf("%d", &x);
    printf("%d\n", x);
    if (isprime(x))
        printf("Is prime");
    else
        printf("Not Prime");

    return 0;
}

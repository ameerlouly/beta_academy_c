#include <stdio.h>

void bitwiseiseven(int x)
{
if ((x&1) == 0)
    printf("is even");
else
    printf("is odd");
}

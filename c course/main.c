#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main()
{
 int x, y, z;
 printf("Enter 3 numbers\n");
 scanf("%d%d%d",&x ,&y ,&z);
 printf("%d", bigofthree(x,y,z));

return 0;
}

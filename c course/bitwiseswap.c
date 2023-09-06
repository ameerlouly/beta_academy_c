void bitwiseswap()
{
    int x, y;
    scanf("%d%d", &x, &y);
    int temp;
    temp = x ^ y;
    x = y;
    y = temp ^ x;
    printf("X = %d\n", x);
    printf("Y = %d", y);
}

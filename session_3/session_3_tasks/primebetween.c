void primebetween(int x, int y)
{
  int i, j, flag=0;
    if (x == 0)
    printf("Enter Valid Number");
    else
    {
        if (y > x)
        {
        x = x ^ y;
        y = x ^ y;
        x = x ^ y;
        }
    for (i = x; i >= y; i--)
    {
        flag=0;
        for (j = i - 1; j >= 2; j--)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        printf("%d\n", i);
    }
    }
}

void tobinary2(int x)
{
    int i, temp;
    temp = x;
    for (i = 8; i >= 0; i--)
    {
        temp = x >> i;
        if (temp & 1 == 1)
            printf("1");
        else
            printf("0");
        temp = x;


    }
}

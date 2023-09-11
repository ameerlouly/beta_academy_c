int isprime(int x)
{
    int i, flag=0;
    if (x == 0)
    printf("Enter Valid Number");
    else
    {
    for (i = x - 1; i >= 2; i--)
    {
        if (x % i == 0)
        {
            return 0;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    return 1;
    }
}

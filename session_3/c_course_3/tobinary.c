void tobinary(int x)
{
    int i;
    for (i = x; i >= 0; i /= 2)
    {
        x=i;
        printf("%d",x % 2);
    }
}

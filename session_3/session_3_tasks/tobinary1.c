void tobinary1(int x)
{
    int i;
    for (i = x; i >= 1; i /= 2)
    {
        printf("%d",i % 2);
    }
}

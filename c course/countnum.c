int countnum(int x)
{
    int r;
    while (x > 0)
    {
        r++;
        x /= 10;
    }

    return r;
}

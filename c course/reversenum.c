int reversenum(int x)
{
    int remainder, r = 0;
    while (x > 0)
    {
        remainder = x % 10;
        r = r * 10 + remainder;
        x /= 10;
    }

    return r;
}

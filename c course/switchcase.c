char switchcase(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        c -= ('a' - 'A');
        return c;
    }
    else if (c >= 'A' && c <= 'Z')
    {
        c += ('a' - 'A');
        return c;
    }
    else
        return 0;
}

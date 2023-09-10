int power(int x, int y)
{
int r=1;
for (;y > 0; y--)
    r*=x;
    return r;
}

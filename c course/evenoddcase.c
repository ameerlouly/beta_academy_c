void evenoddcase(int x)
{
    switch (x % 2 == 0)
{
case 1:
    printf("is even ");
    break;
case 0:
    printf("is odd");
    break;
default:
    printf("Enter a valid number");
}
}

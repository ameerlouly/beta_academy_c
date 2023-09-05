void odd()
{
    int x;
    printf("Enter Numbers\n");
    start:
    scanf("%d", &x);
    if (x % 2 != 0)
    {
       scanf("%d", &x);
       if (x % 2 != 0)
        printf("STOP");
       else
        goto start;
    }
    else
        goto start;

}

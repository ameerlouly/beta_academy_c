void odd1to100()
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
            continue;
        else
            printf("%d ", i);
    }
}

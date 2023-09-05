void profitloss()
{
    int spend, earn, diff;
    printf("Enter total Spendings:");
    scanf("%d", &spend);
    printf("Enter total Earnings:");
    scanf("%d", &earn);
    diff = earn - spend;
    if(diff >= 0)
    printf("You earned %d", diff);
    else
    {
    diff = 0 - diff;
    printf("You Lost %d", diff);
    }

}

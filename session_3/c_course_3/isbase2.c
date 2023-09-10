void isbase2(int i)
{
    int flag;
    for (;i >= 2; i /= 2)
    {
        if (i % 2 == 1)
        {
            printf("This Number is not Base 2\n");
            flag = 1;
            break;
        }
    }
     if (flag != 1)
        printf("Number is base 2\n");
}

void calculator()
{
    char c;
    float x,y;
    scanf("%f %c%f",&x,&c,&y);
    switch (c)
    {
    case '+':
        printf("%f", x+y);
        break;
    case '-':
        printf("%f", x-y);
        break;
    case '*':
        printf("%f", x*y);
        break;
    case '/':
        printf("%f", x/y);
        break;

    }

}

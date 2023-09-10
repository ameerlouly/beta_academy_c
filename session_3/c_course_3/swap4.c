void swap4()
{
    int x, y, z, temp;
    printf("Enter First Number: ");
    scanf("%d", &x);
    printf("Enter Second Number: ");
    scanf("%d", &y);
    printf("Choose method: ");
    scanf("%d", &z);

    switch (z)
    {
    case 1:
        temp = x;
        x = y;
        y = temp;
        printf("X= %d, Y= %d", x, y);
        break;
    case 2:
        x = x ^ y;
        y = x ^ y;
        x = x ^ y;
        printf("X= %d, Y= %d", x, y);
        break;
    case 3:
        x = x * y;
        y = x / y;
        x = x / y;
        printf("X= %d, Y= %d", x, y);
        break;
    case 4:
        x = x + y;
        y = x - y;
        x = x - y;
        printf("X= %d, Y= %d", x, y);
        break;
    default:
        printf("Enter a number between 1 and 4");

    }
}

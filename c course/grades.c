void grader(float, float);

void grades()
{
int phy, phytot, chm, chmtot, bio, biotot, mth, mthtot, cmp, cmptot;
    printf("Enter Physics Mark:");
    scanf("%d", &phy);
   printf("Enter Total Physics Mark:");
    scanf("%d", &phytot);
    printf("Enter Chemistry Mark:");
    scanf("%d", &chm);
    printf("Enter Total Chemistry Mark:");
    scanf("%d", &chmtot);
   printf("Enter Biology Mark:");
    scanf("%d", &bio);
    printf("Enter Total Biology Mark:");
    scanf("%d", &biotot);
   printf("Enter Mathematics Mark:");
    scanf("%d", &mth);
    printf("Enter Total Mathematics Mark:");
    scanf("%d", &mthtot);
   printf("Enter Computer Mark:");
    scanf("%d", &cmp);
    printf("Enter Total Computer Mark:");
    scanf("%d", &cmptot);

    printf("Physics ");
    grader(phy, phytot);
    printf("Chemistry ");
    grader(chm, chmtot);
    printf("Biolog ");
    grader(bio, biotot);
   printf("Mathematics ");
    grader(mth, mthtot);
   printf("Computer ");
    grader(cmp, cmptot);

}

void grader(float x, float y)
{
float prcnt;
prcnt = (x / y) * 100;

if (prcnt >= 90)
printf("A\n");
else if (prcnt >= 80)
printf("B\n");
else if (prcnt >= 70)
printf("C\n");
else if (prcnt >= 60)
printf("D\n");
else if (prcnt >= 50)
printf("E\n");
else
printf("F\n");

}

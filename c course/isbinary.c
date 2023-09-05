void isbinary(int x)
{
    int remain;
  while (x > 0)
  {
      remain = x % 10;
      if (remain != 0 && remain != 1)
      {
          printf("Number is not Base of 2");
          break ;
      }
      else
      {
          x /= 10;
          continue ;
      }

  }
  if (x == 0)
        printf("Number is Base of 2");

}

#include <stdio.h>
int main(void)
{
  long num=0,i,j;
  int t=0,p;
  while (scanf("%d",&num)!=EOF)
    {
      t=0;
      for (i=2;i!=num+1;i++)
        {
          p=0;
          for (j=2;j!=i;j++)
            {
              if (i%j==0)
                {
                  p++;
                  break;
                }
            }
          if (p==0)
            {t++;}
        }
      printf ("%d\n",t);
    }
  return 0;
}
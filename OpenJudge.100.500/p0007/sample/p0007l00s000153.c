/*
AIZU ONLINE A0008
Sum of 4 Integers

*/
#include <stdio.h>

int main()
{
  int i,j,k,l;
  int total;
  int cnt;

  while(EOF != scanf("%d",&total))
        { cnt=0;
          for(i=0;i<10;i++)
            for(j=0;j<10;j++)
              for(k=0;k<10;k++)
                for(l=0;l<10;l++)
                  if(i+j+k+l == total)
                    cnt++;

          printf("%d\n",cnt);
        }

        return(0);
}
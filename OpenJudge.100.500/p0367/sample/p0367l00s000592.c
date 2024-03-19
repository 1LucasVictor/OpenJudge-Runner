#include <stdio.h>

int main( )
{
  int a,b,c,i,count = 0;

  scanf("%d%d%d",&a,&b,&c);

  if(a != b)
    {
      for(i = a; i <= b; i++)   //カウンタ変数がどこまで続くかを知れ
	{
	  //printf("%d\n",i);
	  if(c % i == 0)count++;
	  else continue;
	}
    }
  /* else
    {
      if(c % a == 0)count++;
      }*/

  printf("%d\n",count);

  return 0;
}
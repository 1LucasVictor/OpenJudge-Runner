#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define PI 3.141592653589
#define N_MAX 1000
#define NUM 26

int main()
{
  int m, h, i, j, len, sum;
  while(1)
    {
      char buf[N_MAX], tmp[N_MAX];
      sum = 0;
      scanf("%s",buf);
      if(strcmp(buf,"-") == 0) break;
      len = strlen(buf);
      scanf("%d",&m);
      for(i = 0; i < m; i++)
	{
	  scanf("%d",&h);
	  sum += h;
	}
      for(j = 0; j < len; j++)
	{
	  tmp[j] = buf[(sum+j)%len];
	}
      for(j = 0; j < len; j++)
	{
	  buf[j] = tmp[j];
	}
      printf("%s\n",buf);
    }
  return 0; 
}
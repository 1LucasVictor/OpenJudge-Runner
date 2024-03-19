#include<stdio.h>

int main(){
  
  int i, j, n, x, y, z[100], cnt;

  scanf("%d",&n);

  for(i = 0; i < n; i++)
    {
      cnt = 0;
      scanf("%d%d",&x,&y);
      for(j = 0; j < y; j++)scanf("%d",&z[j]);
      for(j = 0; j < n; j++)
	{
	  if(z[cnt] == j + 1)
	    {
	      printf("1");
	      z[cnt] = -1;
	      cnt++;
	    }
	  else printf("0");

	  if(j != n - 1)printf(" ");
	  else printf("\n");
	}
    }
  return 0;
}


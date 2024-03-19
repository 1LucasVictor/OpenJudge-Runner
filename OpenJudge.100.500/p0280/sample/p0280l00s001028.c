#include<stdio.h>
#define N 100

typedef struct{
  int  data[N+1];
}Node;

Node a[N+1];

int main()
{
  int i,j,n,k=0,min = 0,keiro=0,kakuno[N+1] = {0},num=1,hantei[N+1] = {0};

  scanf("%d",&n);

  for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
      scanf("%d",&a[i].data[j]);
  
  
  kakuno[0] = 1;
  hantei[1] = 1;
    while(num < n)
    {
      min = 2001;
      for(i = 0;i < num;i++)
	{
	  for(j = 1;j <= n;j++)
	    {
	      if(hantei[j] == 1 )
		  continue;
	      else if(a[kakuno[i]].data[j] != -1 && min > a[kakuno[i]].data[j])
		{
		  min = a[kakuno[i]].data[j];
		  kakuno[num] = j;
		}
	    }
	}
      keiro += min;
      hantei[kakuno[num]] = 1;
      num++;
    }
  
  printf("%d\n",keiro);
  return 0;
}


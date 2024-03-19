#include<stdio.h>
int main()
{
	int n,count=0;
    int i,j;
    scanf("%d",&n);
    for(i=1;i<10;i++)
    {
		for(j=1;j<10;j++)
        {
			if(n==i*j)
            {printf("Yes");
              count=1;
            break;
            }
        }
      if(count==1)
      break;
    }
  if(count==0)
    printf("No");
  return 0;
}
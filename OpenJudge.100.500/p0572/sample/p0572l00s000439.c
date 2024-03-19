#include<stdio.h>

int main(void)
{
    int L,R,i,j;
    scanf("%d %d",&L,&R);
	int mod_min=L*(L+1)%2019;
    
  for(i=L;i<R-1;i++)
    {
        for(j=i+1;j<=R;j++)
        {
          if(mod_min>i*j%2019)
          {
            mod_min=i*j%2019;
          }
        }
    }
    printf("%d",mod_min);
}
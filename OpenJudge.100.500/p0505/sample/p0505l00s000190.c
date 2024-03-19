#include<stdio.h>

main()
{
int h,n,i,sum;

  scanf("%d %d",&h,&n);
    sum=0;
int a[n];    
  
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
   sum=sum+a[i];
// printf("%d\n",a[i]);
  }

  if (sum >= h )
  {
  	printf("Yes");
  } else {
    printf("No");
  }
  
  return 0;
}
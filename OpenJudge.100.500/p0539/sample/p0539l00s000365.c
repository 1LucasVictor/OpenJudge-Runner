#include<stdio.h>
main()
{
  int a,i,j = 0;
  scanf("%d",&a);
  for(i=1;i<10;i++){
    if(a/i<10 && a%i==0)
      j++;
  }
  if(j>0)
    printf("Yes\n");
  else
    printf("No\n");
  return 0;
}
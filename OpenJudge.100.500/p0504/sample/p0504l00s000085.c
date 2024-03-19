#include<stdio.h>
int  main(){
 int h,a;
  scanf("%d",&h);
  scanf("%d",&a);
  int count=0;
  while(h>0)
  {
    h = h-a;
    count++;
  }
  printf("%d",count);
  return 0;
}

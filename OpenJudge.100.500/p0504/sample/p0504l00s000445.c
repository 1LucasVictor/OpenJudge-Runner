#include<stdio.h>
void main(){
 int h,a;
  int temp;
   temp = scanf("%d",&h);
  temp =scanf("%d",&a);
  int count=0;
  while(h>0)
  {
    h = h-a;
    count++;
  }
  printf("%d",count);
}

#include<stdio.h>

int main()
{
  int a,b,c,d,e,k;
  
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  scanf("%d",&d);
  scanf("%d",&e);
  scanf("%d",&k);
  
 if((e-a)>k | (e-b)>k | (e-c)>k | (e-d)>k | (d-a)>k | (d-b)>k | (d-c)>k | (c-a)>k | (c-b)>k | (b-a)>k){
   printf(":(");
 }else{
   printf("Yay!");
 }
  
  return 0;
}

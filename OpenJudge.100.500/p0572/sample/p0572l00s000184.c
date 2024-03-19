/* 133c */
#include<stdio.h>
#include<math.h>
int main(void)
{
  int l,r,i,j,a,min;
  scanf("%d %d",&l,&r);
  min=2019;
  for(i=l;i<=r;i++){
    for(j=i+1;j<=r;j++){
      a=(i*j)%2019;
     if(min>a){
      min=a;
      }
    }
  }
  printf("%d\n",min);
  return 0;
}

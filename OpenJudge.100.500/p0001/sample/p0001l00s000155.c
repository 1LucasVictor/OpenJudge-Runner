#include<stdio.h>
int main()
{
  int a[200][2];
  int i,sum,j,k=0;
  for(k=0;k<3;k++){
    for(i=0;i<2;i++){
    scanf("%d",&a[k][i]);
  }
  sum=a[k][0]+a[k][1];
  j=0;
  while(sum>=1){
    sum=sum/10;
    j=j+1;
  }
  printf("%d\n",j);
  }
  return 0;
}
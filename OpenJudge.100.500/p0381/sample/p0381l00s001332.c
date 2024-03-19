#include<stdio.h>

int main(void){
  int n,x,i,j,k,count;

  while(1){
    count=0;
    scanf(" %d %d",&n,&x);
    if(x==0&&n==0)
      break;
    for(i=1;i<=n;i++)
      for(j=i+1;j<=n;j++)
	for(k=j+1;k<=n;k++)
	  if((i+j+k)==x)
	    count++;
    printf("%d\n",count);

  }

  return 0;
}
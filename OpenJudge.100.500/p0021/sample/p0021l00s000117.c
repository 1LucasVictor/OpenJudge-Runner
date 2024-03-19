#include<stdio.h>

int main(void)
{
  int sum;
  int n[5000];
  int ans[5000];
  int a=0,i,j,x=0,k;

  while(scanf("%d",&k)){
    if(k==0)
      break;

    for(i=0; i<k; i++){
      scanf("%d",&n[i]);
    }

    x=0;
    for(i=0; i<k; i++){
      sum = n[i]; 
      for(j=i+1; j<k; j++){
	sum=sum+n[j];
	if(x<sum)
	  x=sum;
      }
    }
    printf("%d\n",x);
  }

  return 0;
}
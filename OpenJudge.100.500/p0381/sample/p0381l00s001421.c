#include<stdio.h>
int main(){
  int n,x,i,j,k,sum,count=0;

  while(1){
    scanf("%d%d",&n,&x);

    if(n+x==0) break;

    for(i=1;i<=5;i++){
      for(j=i+1;j<=5;j++){
	for(k=j+1;k<=5;k++){
	  sum=i+j+k;
	  if(sum==x) count++;
	}
      }
    }

    printf("%d\n",count);
  }
    return 0;
  }
	
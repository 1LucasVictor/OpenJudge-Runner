
#include<stdio.h>

int main(void){
  int n,x,i,j,k,sum=0,com=0;
  scanf("%d%d",&n,&x);
  if(n==0&&x==0) return 0;
  for(i=1;i<=n-2;i++){
    for(j=i+1;j<=n-1;j++){
      for(k=j+1;k<=n;k++){
	if( x == i + j + k ){
	  com++;
	}
      }
    }
  }
  printf("%d\n",com);
  return 0;
}
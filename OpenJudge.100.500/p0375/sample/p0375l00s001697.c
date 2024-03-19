#include <stdio.h>

int main(){
  int n,i,j,b=0,m=0,a;
  scanf("%d",&n);
  for(i=1; i<=n; i++){
    if(i%10==0)m+=1;
    a=i;
    for(j=0; j<m; j++){
      if(a%10==3){
	b=1;
	break;
      } 
      a/=10;
    }
    if(i%3==0||b)printf(" %d",i);
    b=0;
  }
  printf("\n");
  return 0;
}
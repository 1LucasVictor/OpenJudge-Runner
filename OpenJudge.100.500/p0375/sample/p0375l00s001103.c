#include <stdio.h>
int main(){
  int n,i,x;

  scanf("%d",&n);
  for(i=1;i<=n;i++){
    x=i;
    if((x%3)==0) printf(" %d",i);
    else{
      while(1){
	if((x%10)==3) printf(" %d",i);
	if((x/=10)==0) break;
      }
    }
  }
  printf("\n");

  return 0;
}
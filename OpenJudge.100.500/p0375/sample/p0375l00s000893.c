#include <stdio.h>
int main(){
  int n,i;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    if(i%3==0){
      printf(" %d",i);
    }
    if(i!=3){
    if(i%10==3){
      printf(" %d",i);
    }
    }
  }
  if(i==0){
      while(i==0){
	printf(" %d",i);
      }
    }
  printf("\n");
return 0;
}
  
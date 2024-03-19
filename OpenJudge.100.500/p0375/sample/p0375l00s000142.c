#include<stdio.h>
int main(){
  int i=1,x,n,a;
  scanf("%d",&n);
  while(1){
    //CHEK_NUM
    a=0;
    x=i;
    if(x%3==0){
      printf(" %d",i);
      a=1;
    }
    //INCLUDE3
    else if(a==0){
      if(x%10==3){
	printf(" %d",i);
	a=2;
      }
    }
    else if(a!=1 && a!=2){
      x/=10;
      if(x){
	if(x%10==3){
	  printf(" %d",i);
	}
      }
    }
    //END_CHEK_NUM
    if(++i>=n+1)break;
  }
  printf("\n");
  return 0;
}
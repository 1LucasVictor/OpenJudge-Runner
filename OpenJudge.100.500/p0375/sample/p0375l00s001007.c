#include<stdio.h>
int main(){
  int i,x,n,a,j,b;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    a=10;
  //CHEK_NUM
    if(i%3==0){
      printf(" %d",i);
    }
    else if(i%10==3){
      printf(" %d",i);
    }
    else{
      for(j=0;j<4;j++){
	b=i/a;
	if(b%10==3){
	  printf(" %d",i);
	}
	a=a*10;
      }
    }
  }
      printf("\n");
  return 0;
}
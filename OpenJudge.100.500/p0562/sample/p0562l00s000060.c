#include<stdio.h>
int main(){
  int a,b,i;
  scanf("%d%d",&a,&b);
  for(i=1; i<=20; i++){
    if(b==1){
      printf("0\n");
      break;
    }
    if(a+(a-1)*(i-1)>=b){
      printf("%d\n",i);
      break;
    }
  }
  return 0;
}

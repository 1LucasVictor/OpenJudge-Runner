#include<stdio.h>
int main(){
  int a,b,i;
  scanf("%d%d",&a,&b);
  for(i=1; i<=11; i++){
    if(a+(a-1)*(i-1)>=b){
      printf("%d\n",i);
      break;
    }
  }
  return 0;
}

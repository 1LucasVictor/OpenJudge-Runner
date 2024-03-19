#include<stdio.h>

int main(){
 int a,b,c,d,e,k;
  scanf("%d\n%d\n%d\n%d\n%d\n%d\n",&a,&b,&c,&d,&e,&k);
  if(e-a<=k){
   printf("Yay!\n");
  }else{
   printf(":(\n");
}
  return 0;
}
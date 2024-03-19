#include<stdio.h>
int main(void){
  int a,b,k,n,f=0;
  
  scanf("%d",&k);
  scanf("%d %d",&a,&b);
  
  for(n=a;n<=b;n++){
    if(n%k == 0){
      f = 1;
      break;
    }
  }
  
  if(f == 1){printf("OK");}
  else{printf("NG");}
  
  return 0;
}

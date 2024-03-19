#include<stdio.h>
int main(void){
  int k,a,b,i,c;
  c=0;
  scanf("%d",&k);
  scanf("%d %d",&a,&b);
  for(i=a;i<=b;i++){
    if(i%k==0){
      printf("OK\n");
      c=1;
      break;
    }
  }
  if(c==0){
    printf("NG\n");
  }
  return 0;
}

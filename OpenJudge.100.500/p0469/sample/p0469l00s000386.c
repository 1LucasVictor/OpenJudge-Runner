#include <stdio.h>
int main(){
  int k,a,b;
  scanf("%d",&k);
  scanf("%d %d",&a,&b);
  int i;
  for (i=a;i<=b;i++){
    if(i%k==0){
      printf("OK\n");
      break;
    }
    if(i==b){
      printf("NG\n");
    }
  }
  return 0;
}
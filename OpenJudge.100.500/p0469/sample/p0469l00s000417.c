#include <stdio.h>
char main(){
  int a,b,k,i;
  scanf("%d\n",&k);
  scanf("%d %d",&a,&b);
  for(i=a/k;i<=b/k;i++){
    if(i*k>=a && i*k<=b){
      printf("OK");
      return 0;
    }
  }
  printf("NG");
  return 0;
}
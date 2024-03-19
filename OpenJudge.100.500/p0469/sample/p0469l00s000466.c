#include<stdio.h>
int main(void){
  int k,a,b;
  int sum=0;
  scanf("%d",&k);
  scanf("%d %d",&a,&b);
  for(int i=a;i<=b;i++){
    if(i%k==0){
      sum+=1;
    }
  }
  if(sum>=1){
    printf("OK\n");
  }else{
    printf("NG\n");
  }
  return 0;
}
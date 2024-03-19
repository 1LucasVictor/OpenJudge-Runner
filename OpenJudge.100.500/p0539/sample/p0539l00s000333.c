#include<stdio.h>
int main(void){
  int n,res=0;
  scanf("%d",&n);
  for(int i=1;i<10;i++){
    if(n/i<10&&n%i==0){
      res=1;
      break;
    }
  }
  if(res==0)printf("No\n");
  else printf("Yes\n");
  return 0;
}
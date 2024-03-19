#include <stdio.h>

int main(){

  int debt=100000;
  int n,i,rs=0,tmp=0,ans=0;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    debt=debt*1.05;
    if(debt%1000!=0){
      debt=(debt/1000+1)*1000;
    }
  }
  printf("%d\n",debt);
  return 0;
}

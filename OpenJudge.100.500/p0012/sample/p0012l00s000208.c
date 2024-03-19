#include <stdio.h>

int main(){

  int n,i=1;
  int a[11]={};
    scanf("%d",&n);
    a[1]=n;
  while(1){
    if(i==0)break;
    scanf("%d",&n);
    if(n==0){
      printf("%d\n",a[i]);
      i--;
    }
    else{
      i++;
      a[i]=n;
    }
  }
return 0;
}
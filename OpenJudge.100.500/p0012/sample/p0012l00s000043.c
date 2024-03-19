#include <stdio.h>

int main(){
  
  int n,i=0;
  int a[10]={};
  while( scanf("%d",&n) !=EOF){
    if(n==0){
      i--;
      printf("%d\n",a[i]);
    }
    else{
      a[i]=n;
      i++;
    }
  }
  return 0;
}
#include <stdio.h>
int main(void){
  int a[100]={0};
  int n,c=0;
  while(scanf("%d",&n)!=EOF){
    if(n){
      a[c]=n;
      c++;
    }
    else{
      c--;
      printf("%d\n",a[c]);
    }
  }
  return 0;
}
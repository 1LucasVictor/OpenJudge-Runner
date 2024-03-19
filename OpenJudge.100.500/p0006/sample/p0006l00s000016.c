#include <stdio.h>

int main(){
  int i,n,m;
  m=100000;
  scanf("%d",&n);
  for (i=0;i<n;i++){
    m*=1.05;
    int a=m%1000;
    if (a!=0){
      m+=1000-a;
    }
  }
  printf("%d\n",(int)m);
  return 0;
}
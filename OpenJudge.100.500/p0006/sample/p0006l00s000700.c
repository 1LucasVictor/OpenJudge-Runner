#include <stdio.h>

int main(){
  int i,n;
  long m=100000;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    m*=1.05;
    m=((m/1000)+(m%1000!=0))*1000;
  }
  printf("%ld\n",m);
  return 0;
}
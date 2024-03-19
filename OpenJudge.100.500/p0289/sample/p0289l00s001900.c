#include<stdio.h>
int main(){
  int n1,n2,amari,x;
  scanf("%d%d",&n1,&n2);
  if(n1<n2){
    x=n1;
    n1=n2;
    n2=x;
  }
  while(1){
    amari=n1%n2;
    if(amari==0)
      break;
    n1=n2;
    n2=amari;
  }
  printf("%d\n",n2);
  return 0;
}


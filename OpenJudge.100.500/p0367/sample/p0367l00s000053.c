#include<stdio.h>

int main (){

  int a,b,c;

  scanf("%d %d %d",&a,&b,&c);

  int i;
  int n=0;
  for(i=a;i<=b;i++){
    if(c%i==0){

      n=n+1;
}
    else {}
  }
  printf("%d\n",n);
  return 0;
}
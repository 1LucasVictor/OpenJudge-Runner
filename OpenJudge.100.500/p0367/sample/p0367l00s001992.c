#include<stdio.h>
int main(){
  int a,b,c,i,p=0;
  scanf("%d %d %d",&a,&b,&c);
  for(i=a;i<=b;i++){
    c%i;
    if(c%i==0){p++;}}


  printf("%d\n",p);
  return 0;
}
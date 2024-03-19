#include<stdio.h>
#define PRN(n) printf("%d\n",n)
#define PRS(s) printf("%s\n",s)
int main(void){
  int a,b;
  scanf("%d %d",&a,&b);
  if((a+b)%2){
    PRS("IMPOSSIBLE");
  }else{
    PRN((a+b)/2);
  }
  return 0;
}
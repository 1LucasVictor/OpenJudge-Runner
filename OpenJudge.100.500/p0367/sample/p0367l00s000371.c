#include<stdio.h>
int main(void){

  int a,b,c,d,e,i;
  e = 0;
  scanf("%d%d%d",&a,&b,&c);
  for(i = a;i <= b;i++){
    d = c % i;
    if(d == 0){
      e++;
    }else(e == e);
        }
  printf("%d\n",e);
  return 0;
}
#include<stdio.h>
int main(void){
  int a = 0,b = 0,c = 0,i = 0,j = 0;
  scanf("%d %d %d",&a,&b,&c);

  for(i = a;i <= b;i++){
    if( c % i == 0){
      j++;
    }
  }
  printf("%d\n",j);
  return 0;
}
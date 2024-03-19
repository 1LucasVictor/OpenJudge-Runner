#include<stdio.h>
int d, n, i;
int main(void){
  scanf("%d%d", &d, &n);
  if(n==100){
    printf("101");
  }else{
    printf("%d", n);
  }
  for(i=0; i<d; i++){printf("00");}
  puts("");
}

/* 144a */
#include<stdio.h>
int main(void){
  int a,b,f;
scanf("%d %d",&a,&b);
if(a<10&&b<10){
  printf("%d\n",a*b);
 }
if(a>9||b>9){
  printf("-1\n");
 }
return 0;
}

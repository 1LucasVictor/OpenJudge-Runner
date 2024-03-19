#include <stdio.h>
int main(void)
{
　int D;
　int N;
 　scanf("%d %d", &D,&N);
 　
if(N!=100){　
　switch(D){
　    case 0:
　       printf("%d",N);
　       break;
　   case 1:
　       printf("%d",100*N);
　       break;
　   case 2:
　       printf("%d",10000*N);
　       break;
　  default:break;
　}}
　else {switch(D){
　    case 0:
　       printf("%d",101);
　       break;
　    case 1:
　       printf("%d",10100);
　   case 2:
　       printf("%d",1001000);
　}}
  return 0;
}
　
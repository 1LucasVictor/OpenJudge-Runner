#include <stdio.h>
int main(void)
{
　int D;
　int N;
 　scanf("%d %d", &D,&N);
　
　if (D==0){
　    printf("%d", N);
　    
　}
　else if(D==1){
　    printf("%d",100*N);
　    
　}
　else {
　    printf("%d",10000*N);
　    
　}
  return 0;
}
　
#include<stdio.h>
#include<math.h>
 
int main(){
  float A,B;
  while(scanf("%f %f",&A,&B)==0);
  
  float C=A*B;
  
  printf("%g\n",floor(C));
  
  
  return 0;
}
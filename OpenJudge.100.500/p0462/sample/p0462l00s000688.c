#include<stdio.h>
int main(void){
  long long int A,B1;
  double B,B2;
  scanf("%d" ,&A);
  scanf("%lf",&B);
  B1=(long long int)B;
  B2=B-(double)B1;
  printf("%d",A*B1+(int)(A*(int)(B2*100))/100);
  return 0;
}
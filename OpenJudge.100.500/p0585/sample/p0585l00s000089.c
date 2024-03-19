#include<stdio.h>
int main(void)
{
  int A,B;
  double T;
  scanf("%d%d%lf",&A,&B,&T);
	
  T+=0.5;	T=(int)T/A;
  
  printf("%d",(int)(T*B));
  
  return 0;
}
#include<stdio.h>
int main(void){
  	int a;
  	double b;
  scanf("%d%lf",&a,&b);
  int c = (a * (b * 100)) / 100;
  printf("%d\n",c);
}

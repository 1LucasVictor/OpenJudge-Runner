# include<stdio.h>
int main(void){
  long int a,x;
  double b;
  scanf("%ld %lf",&a,&b);
  x=(long int)(b*(double)a);
  printf("%ld",x);
  return 0;
}
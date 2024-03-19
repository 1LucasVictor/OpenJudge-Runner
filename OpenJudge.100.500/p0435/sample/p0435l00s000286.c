#include<stdio.h>
int main(void){
  int counter=0,a;
  double b,c,d;
  scanf("%d",&a);
  scanf("%lf",&b);
  for(int i=0;i<a;i++){
    scanf("%lf%lf",&c,&d);
  	if(c*c+d*d<=b*b)counter++;
  }
  printf("%d",counter);
}
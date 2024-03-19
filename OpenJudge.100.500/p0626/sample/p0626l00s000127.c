#include<stdio.h>
#include<math.h>
int main(){
  int d,n;
  scanf("%d%d",&d,&n);
  if(n==100)n++;
  printf("%.0lf",pow(100,d)*n);
}
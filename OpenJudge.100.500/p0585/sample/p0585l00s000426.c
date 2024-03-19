#include<stdio.h>
int main(){
  float a,b,t;
  scanf("%f%f%f",&a,&b,&t);
  int j;
  j=t/a;
  int ans=0;
  ans=b*j;
  printf("%d\n",ans);
}
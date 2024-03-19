#include<stdio.h>
  
int main(){
  int s1,s2,s3;
  //s1,s2,s3は0又は1から良い
  scanf("%d",&s1);
  s2 = s1%100;
  s1 = s1/100;
  s3 = s2%10;
  s2 = s2/10;
  printf("%d", s1+s2+s3);
  return 0;

}
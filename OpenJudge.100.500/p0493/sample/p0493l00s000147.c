#include<stdio.h>

int main(){
 int a,i,sum=0;
  scanf("%d",&a);
  sum = (a/500)*1000 + ((a%500)/5)*5;
  printf("%d\n",sum);
  
  return 0;
}

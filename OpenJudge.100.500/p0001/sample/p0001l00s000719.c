#include<stdio.h>
int main(){
  int a,b,num,sum;
  num=1;
  while(scanf("%d %d",&a,&b)!= EOF){
    sum=a+b;
    while(sum>9){
      sum=sum/10;
      num++;
    }
    printf("%d\n",num);
    num=1;
  }
  return 0;
}
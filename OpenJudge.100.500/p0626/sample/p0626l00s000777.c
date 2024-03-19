#include<stdio.h>
int calc(int X){
    int N=0;
  while(X%100==0){
    X/=100;
    N++;
  }
  return N;
}

int main(void){
  int a,b,count=0,num=1;
  scanf("%d %d",&a,&b);
  while(count<b){
    if(calc(num)==a){
      count++;
    }
    ++num;
  }
  printf("%d\n",num-1);
  return 0;
}
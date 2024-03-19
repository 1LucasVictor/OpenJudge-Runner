#include<stdio.h>
#define N 1000

int main(){
  int number[N];
  int x;
  int x_vir_1000;
  int x_vir_100;
  int x_vir_10;
  int i;
  int n=0;

  for(i=0;i<N;i++){
    number[i]=0;
  }
  
  while(1){
    scanf("%d",&x);
    if(x==0 || N<1000)break;
    number[n]+=x/1000;
    x_vir_1000 = x%1000;
    number[n]+=x_vir_1000/100;
    x_vir_100=x_vir_1000%100;
    number[n]+=x_vir_100/10;
    x_vir_10=x_vir_100%10;
    number[n]+=x_vir_10;
    n++;
  }

  for(i=0;i<n;i++){
    printf("%d\n",number[i]);
  }

  return 0;
}
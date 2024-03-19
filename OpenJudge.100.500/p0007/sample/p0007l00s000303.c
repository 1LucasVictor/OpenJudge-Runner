#include<stdio.h>

int main(void){
  int i,j,num,pre,sum;
  int n[10000]={0},count[10000]={0};

  for(i=0;(scanf("%d",&n[i])==1);i++){}
  num=i;
  for(i=0;i<num;i++){
    for(j=0;j<=9999;j++){
      if(n[i]>36) break;
      pre=j;
      sum=0;
      sum+=pre/1000;
      pre-=(pre/1000)*1000;
      sum+=pre/100;
      pre-=(pre/100)*100;
      sum+=pre/10;
      pre-=(pre/10)*10;
      sum+=pre;
      if(sum==n[i]){
        count[i]++;
      }
    }
  }
  for(i=0;i<num;i++){
    printf("%d\n",count[i]);
  }
  return 0;
}
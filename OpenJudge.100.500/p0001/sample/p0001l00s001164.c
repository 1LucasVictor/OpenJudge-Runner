#include<stdio.h>

int main(){

  int a,b,sum,i=0,j=0,keta=1,count=1,data[200];

  while(scanf("%d %d",&a,&b)!=EOF){
    for(j=0,keta=1,count=1;j<7;j++,keta++,count=count*10){
      sum = (a+b) / count;
      if( -1 < sum && sum < 10){
        printf("%d\n",keta);
        break;
      }
    }
  }

  return 0;

}
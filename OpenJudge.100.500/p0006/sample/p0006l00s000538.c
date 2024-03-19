#include<stdio.h>

int main(){
  int n,i;
  int tmp1;
  scanf("%d",&n);
  tmp1 = 100000;
  for(i=0;i<n;i++){
      tmp1=tmp1*105/100;
      if(tmp1%1000>0){
        tmp1=tmp1+1000-tmp1%1000;
      }
  }

  printf("%d\n",tmp1);
  return 0;
}
#include<stdio.h>
int main(){
  int sp=0,data[10],n;
  while(scanf("%d",&n)!=EOF){
    if(n==0){
      printf("%d\n",data[--sp]);
    }else{
      data[sp++]=n;
    }
  }
  return 0;
}
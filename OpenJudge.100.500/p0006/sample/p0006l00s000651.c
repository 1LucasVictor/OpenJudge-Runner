#include<stdio.h>

int main(){
  int det=100000,week,i;

  scanf("%d",&week);

  for (i=0;i<week;i++){
    det=det*1.05;
    if((det%1000)!=0){
      det=det-(det%1000)+1000;
    }
  }

  printf("%d\n",det);
}
#include<stdio.h>


int main(){

  int a,b,i,s;

  while(scanf("%d %d",&a,&b)!=EOF){
    s=a+b;
    for(i=0;s!=0;i++){
      s/=10;
    }
    printf("%d",i);
  }
  return 0;
}
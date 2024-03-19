#include<stdio.h>
int main(){
  int a,b,k,n;
  while(scanf("%d %d",&a,&b)!=EOF){
    a=a+b;
    for(k=1,n=1;k<=1000000;k=k*10,n++){
      if(a/k>0 && a/k<10){
	printf("%d\n",n);
      }
    }
  }
  return (0);
}
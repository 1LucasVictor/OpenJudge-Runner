#include<stdio.h>

int f[44];
int makefibonacci(void){
  int i;
  f[0]=1;
  f[1]=1;
  for(i=2;i<45;i++){
    f[i]=f[i-1]+f[i-2];
  }
}
int main(){
  int n;
  makefibonacci();
  scanf("%d",&n);

  printf("%d\n",f[n]);

  return 0;
}


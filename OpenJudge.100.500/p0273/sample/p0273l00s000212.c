#include<stdio.h>

#define N 45
int f[N];
int main(){
  int i,j,n;
  scanf("%d",&n);
  for(i=0;i<=n;i++){
    if(i==0 ||i==1){
      f[i]=1;
    }
    else f[i]=f[i-1]+f[i-2];
  }
  printf("%d\n",f[n]);


  return 0;
}
#include<stdio.h>


int main(){
  int i,n,f[46];
  scanf("%d",&n);
  f[0]=0;
  f[1]=1;
  for(i=2;i<46;i++)
    f[i]=f[i-2]+f[i-1];
  
  printf("%d\n",f[n+1]);



return 0;
}


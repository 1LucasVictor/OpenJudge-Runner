#include<stdio.h>

int fibo(int n){
  if(n==0||n==1) return 1;
  else return fibo(n-2)+fibo(n-1);
}
  
int main(){
  int n,i,f=0,f1=1,f2;

  scanf("%d",&n);
  if(n>44){
    printf("Error\n");
    return 0;
  }
  for(i=0;i<n;i++){
    f2=f1+f;
    f=f1;
    f1=f2;
  }
  
  printf("%d\n",f2);

  return 0;
}


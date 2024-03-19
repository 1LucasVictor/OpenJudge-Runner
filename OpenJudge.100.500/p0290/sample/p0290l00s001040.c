#include <stdio.h>

int prime(int a){
  int i;
  if(a<=1)return 1;
  if(a==2)return 0;
  if(a%2==0)return 1;

  for(i=3;i<a-1;i++){
    if(a%i==0)return 1;
  }

  return 0;
}

int main(void){
  int i,n,a,count=0;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a);
    if(prime(a)==0)count++;
  }

  printf("%d\n",count);

  return 0;
}
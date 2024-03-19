#include<stdio.h>

int main(){
  int n,k1,k2,k3;
  int flag=0;
  
  scanf("%d",&n);
  
  k1=n%10;
  k2=n-k1;
  k2=k2%100;
  k2=k2/10;
  k3=n-(k2*10)-k1;
  k3=k3/100;
  
  if(k1==7)
    flag=1;
  if(k2==7)
    flag=1;
  if(k3==7)
    flag=1;
  
  if(flag==1)
    printf("Yes");
  else if(flag==0)
    printf("No");
  
  return 0;
}
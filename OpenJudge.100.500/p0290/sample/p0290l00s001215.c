#include<stdio.h>

int isprime(int);

int main(){
  int i,n,a,b,cnt=0;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a);
    b=isprime(a);
    if(b==1)cnt++;
  }
  printf("%d\n",cnt);
  return 0;
}

int isprime(int x){
  int i;
  if(x<=1)return 0;
  for(i=2;i*i<=x;i++){
    if(x%i==0)return 0;
  }
  return 1;
}


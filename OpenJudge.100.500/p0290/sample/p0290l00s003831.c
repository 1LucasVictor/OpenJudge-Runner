#include<stdio.h>

int isprime(int x){
  int i;
  if(x==2) return 1;
  if(x<2 || x%2==0) return 0;
  for(i=3;i*i<=x;i+=2){
    if(x%i==0) return 0;
  }
  return 1;
}

int main(){
  int n,c=0,i,a;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a);
    if(isprime(a)) c++;
  }
  printf("%d\n",c);
  return 0;
}
    


#include <stdio.h>
#include <math.h>
int Prime(int);

int main(){
  int n,i,x;
  int cnt=0;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&x);
    if(Prime(x)) cnt++;
  }
  printf("%d\n",cnt);

  return 0;
}

int Prime(int x){
  int i=3;

  if(x==2) return 1;
  if(x%2==0) return 0;
  while(i<=sqrt(x)){
    if(x%i==0) return 0;
    i=i+2;
  }
  return 1;
}
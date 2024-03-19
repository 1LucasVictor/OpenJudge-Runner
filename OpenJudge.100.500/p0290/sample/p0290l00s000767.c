#include <stdio.h>
#include <math.h>

int prime(int);

int main(){
  int i,n,a,cnt=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a);
    if(prime(a)==1)cnt++;
  }
  printf("%d\n",cnt);
  return 0;
}
int prime(int x){
  int i;
  if(x<2) return 0;
  if(x==2) return 1;
  else if(x%2==0) return 0;
  for(i=3;i<=sqrt(x);i+=2){
    if(x%i==0) return 0;
  }
  return 1;
}



#include <stdio.h>
#include <math.h>

int main(){
  int n,d,p,q;
  int count = 0;
  scanf("%d %d",&n,&d);
  for(int i=0;i<n;i++){
    scanf("%d %d",&p,&q);
    if(p*p+q*q<=d*d){
      count++;
    }
  }
  printf("%d\n",count);
  return 0;
}
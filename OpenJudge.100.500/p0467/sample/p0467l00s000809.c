#include <stdio.h>
int main()
{
  long a,b,c,k,i;
  long sum=0;
  int f=0;
  scanf("%ld",&a); scanf("%ld",&b); scanf("%ld",&c); scanf("%ld",&k);
  for(i=0;i<k;i++){
    if(f==0&&a<=k){
      sum+=a;
      f=1;
      k=k-a;
    }
    else if(f==1&&0<b){
      b--;
    }
    else if(f==1&&0<c){
      sum-=1;
      c--;
    }
  }
  printf("%ld",sum);
  return 0;
}

#include<math.h>
int isprime(int);

int main(){
  int x,n[10000],i,count=0;
  scanf("%d",&x);
  for(i=0;i<x;i++){
    scanf("%d",&n[i]);
  }
  for(i=0;i<x;i++){
    if(isprime(n[i])==1)
      count++;
  }
  printf("%d\n",count);
  return 0;
}

int isprime(int x)
{
  int i;
  if(x==2) return 1;
  if(x<2 || x%2==0)
    return 0;
  i=3;
  while(i<=sqrt(x)){
    if(x%i==0)
      return 0;
      i=i+2;
  }
      return 1;
    }
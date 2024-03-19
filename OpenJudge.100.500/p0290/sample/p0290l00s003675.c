#include<stdio.h>
#include<math.h>
int isprime(int x);
int main()
{
  int i,j,n,num[10000];
  int prime=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    if( scanf("%d",&num[i])==EOF)break;
  if(isprime(num[i])==1){
    prime++;
    }
  }
    printf("%d",prime);
    return 0;
}
int isprime(int x){
  int i;
  if(x==2)return 1;
  if(x<2 || x%2==0)return -1;
  i=3;
  while(i<=sqrt(x)){
    if(x%i==0)return -1;
    i=i+2;
  }
  return 1;
}
      
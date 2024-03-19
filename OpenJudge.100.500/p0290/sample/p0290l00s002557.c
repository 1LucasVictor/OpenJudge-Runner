#include <stdio.h>
#include <math.h>
#define N 10000
int isPrime();
int main(){
  int i,n,x[N],count = 0,y;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&x[i]);
  }
for(i=0;i<n;i++){
  y = x[i];
  if(isPrime(y) == 1) count++;
}
printf("%d\n",count);
return 0;
    }

int isPrime(int x){
  int a,b,i;
  a = x%2;
  if(x == 2) return 1;
  if(x<2 || a == 0) return 0;

  i = 3;
  b = x%i;
  while(i <= sqrt(x)){
    if(b != 0) return 1;
    i = i + 2;
  }
  return 1;
}

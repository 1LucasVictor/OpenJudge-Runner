#include<stdio.h>
#include<math.h>
#define T 1
#define F 0
#define N 10000
int isprime(int a){
  int i;
  if (a==2)
    return T;
  if (a<2 || a%2==0)
    return F;
  i = 3;
  while (i<= sqrt(a)){
    if (a%i==0)
      return F;
    i = i + 2;
  }
  return T;
}
int main(){
  int a,n,i,count=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    scanf("%d",&a);
    count = count + isprime(a);
  }
  printf("%d\n",count);
  return 0;
} 
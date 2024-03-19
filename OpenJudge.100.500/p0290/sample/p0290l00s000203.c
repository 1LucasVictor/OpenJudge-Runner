#include<stdio.h>
#include<math.h>
#define N 10000

int isprime();

int main(void)
{
  int a,i,j,n,div,count;
  int t[N];
  count = 0;
  scanf("%d", &n);

  for (i=0; i<n; i++) {
    scanf("%d", &t[i]);
  }
  for (i=0; i<n; i++) {
    a = t[i];
    if(isprime(a)==0){
      count++;
    }
    /*a = t[i];
    div = 0;
    for (j=1; j<=t[i]; j++) {
      if(t[i]%j==0)div++;
    }
    if(div==2){
      count++;
    }else if(div<2||div%2==0){
      count = count;
    }else if()*/
  }
  printf("%d\n", count);

  return 0;
}

int isprime(int x)
{
  //int cnt=0;
  if(x==2){
    return 0;
  }
  if(x<2||x%2==0){
    return 1;
  }
  int i=3;
  while(i<=sqrt(x)){
    if(x%i==0){
      return 1;
    }
    i = i+2;
  }
  return 0;
}


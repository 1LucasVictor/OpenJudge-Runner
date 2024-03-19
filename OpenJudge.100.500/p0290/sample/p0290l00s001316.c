#include<stdio.h>
int isPrime(int x){
  int i;

  if(x==2)
    return 1;

  if(x<2 || x % 2 == 0)
    return 0;

  for(i=3; i*i<= x; i+=2){
    if(x % i == 0)
      return 0;
  }

  return 1;
}

int main()
{
  int i, n, ans;
  int x[1024];
  ans = 0;

  scanf("%d", &n);

  for(i=0; i<n; i++){
    scanf("%d", &x[i]);
  }

  for(i=0; i<n; i++){
    if(isPrime(x[i]) == 1){
      ans++;
    }
  }

  printf("%d\n", ans);

  return 0;
}
#include <stdio.h>

int isPrime(int x);

int main() {
  int i,j,n,m,count=0,num,c;
  scanf("%d",&num);
  for(i = 0;i < num;i++) {
    scanf("%d",&n);
    c = isPrime(n);
    count += c;
    }
  printf("%d\n",count);
  return 0;
  }

int isPrime(int x) {
  int i;
  if(x <= 1) return 0;

  for(i = 2;i < x;i++) {
    if(x % i == 0) return 0;
  }

  return 1;
}
  
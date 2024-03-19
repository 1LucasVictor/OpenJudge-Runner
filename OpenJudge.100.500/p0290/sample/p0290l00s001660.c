#include <stdio.h>
#include <math.h>
#define N 10000

int isprime(int);

int main() {

  int i, n, hantei, count=0; /*count=?´???°?????° */
  int num[N];

  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%d", &num[i]);
  }

  for(i=0; i<n; i++){
    hantei = isprime(num[i]);
    if(hantei==0) count++;
  }

  printf("%d\n", count);

  return 0;
}

int isprime(int num)
{
  int i;
  int true=0, false=1;

    if(num==2) return true;

    if(num < 2 || num%2==0) return false;

    i = 3;
    while(i<=sqrt(num)){
      if(num%i==0) return true;
      i = i+2;
    }

    return true;
}
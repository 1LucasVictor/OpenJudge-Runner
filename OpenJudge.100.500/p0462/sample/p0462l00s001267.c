#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
long long int ans=0;
#define  ll long long
//最大公約数
long long int getgcd(long long n, long long m){
  int r;
  if (n > m) {
    long long t = m;
    m = n;
    n = t;
  }
  while ((r = m % n) != 0) {
    m = n;
    n = r;
  }
return n;
}

//階乗
long long factorial(long long n){
    long long int answer = 1;
while(n > 1){
  answer *= n;
  n--;
}
    return answer;
}

//組み合わせ
long long calcNumOfCombination(long long  n, long long r){
    return factorial(n) / (factorial(r) * factorial(n-r));
}
 void yes(){
   printf("Yes\n");
 }

 void no(){
   printf("No\n");
 }

 long long int swap(ll *x,ll *y){
   long long int tmp;
   tmp = *x;
   *x = *y;
   *y = tmp;
 }

int main(int argc, char const *argv[]) {
  double a=0,b=0,d=0;
  scanf("%lf %lf",&a,&b);
  d=a*b;
  printf("%.0lf\n",(double)(long long int)d);
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
long long int ans=0;
long long sort(long long d[],int NumberArrays,int up){
  int tmp;
  for (int i = 0; i < NumberArrays-1; i++) {
    if (up && d[i]<d[i+1]) {
      d[i]=tmp;
      d[i]=d[i+1];
      d[i+1]=tmp;
    }else if (d[i]>d[i+1]) {
      d[i]=tmp;
      d[i]=d[i+1];
      d[i+1]=tmp;
    }
  }
}
//最大公約数
long long int getgcd(long long n, long long m)
{
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

//nの階乗を計算
long long factorial(long long n){
    long long int answer = 1;
while(n > 1){
  answer *= n;
  n--;
}
    return answer;
}

//組み合わせの数nCrを計算
long long calcNumOfCombination(long long  n, long long r){
    return factorial(n) / (factorial(r) * factorial(n-r));
}


int main(int argc, char* argv[]){
	long long int a = 0, b = 0,d=0,e=0,c[20050]={0};
	scanf("%lld",&a);
  long long f[20050];
  for (int i = 1; i < a; i++) {
    scanf("%lld",&f[i]);
    c[f[i]]++;
  }
  for (int i = 1; i < a+1; i++) {
    printf("%lld\n",c[i]);
  }
  return 0;
}

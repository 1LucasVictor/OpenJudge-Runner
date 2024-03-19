#include<stdio.h>

long max(long a, long b){
  return (a > b) ? a : b;
}

long min(long a, long b){
  return (a < b) ? a : b;
}

long calcGCD(long a, long b){
  long _min, _max, r;
  _max = max(a, b);
  _min = min(a, b);
  r = _max % _min;
  while(r != 0){
    _max = _min;
    _min = r;
    r = _max%_min;
  }
  return _min;
}

long calcLCM(long a, long b){
  int GCD, LCM;
  GCD = calcGCD(a, b);
  LCM = a * b / GCD;
  return LCM;
}
int main(){
  long a, b;
  long list[50][2];
  int j = 0;
  while(scanf("%ld%ld", &a, &b)!=EOF){
    list[j][0] = calcGCD(a, b);
    list[j][1] = calcLCM(a, b);
    j+=1;
  }
  int i;
  for(i=0; i<j; i++){
    printf("%ld %ld\n", list[i][0], list[i][1]);
  }
  return 0;
}
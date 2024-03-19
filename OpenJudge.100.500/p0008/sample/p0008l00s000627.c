#include<stdio.h>

int IsPrimeNum(int i){
  int j;
  if(i==1){
    return 0;
  }else if(i==2){
    return 1;
  }

  if(i%2==0){
    return 0;
  }

  for(j=3; j<=i/j; j++){
    if(i%j==0){
      return 0;
    }
  }
  return 1;
}
int primeNum(int n){
  int cout = 0, i;
  for(i=1; i<=n; i++){
    if(IsPrimeNum(i)){
      cout += 1;
    }
  }
  return cout;
}

int main(){
  int n;
  int list[50];
  int j = 0;
  while(scanf("%d", &n) != EOF){
    list[j] = primeNum(n);
    j += 1;
  }
  int i;
  for(i=0; i<j; i++)
    printf("%d\n", list[i]);
  return 0;
}
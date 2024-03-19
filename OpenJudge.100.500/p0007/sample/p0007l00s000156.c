#include<stdio.h>

int sumOf4(int n){
  int a, b, c, d, cout=0;
  for(a=0; a<=9; a++){
    for(b=0; b<=9; b++){
      for(c=0; c<=9; c++){
        for(d=0; d<=9; d++){
          if(a+b+c+d == n){
            cout += 1;
          }
        }
      }
    }
  }
  return cout;
}

int main(){
  int n;
  int cout;
  while(scanf("%d", &n)!=EOF){
    cout = sumOf4(n);
    printf("%d\n", cout);
  }
  return 0;
}
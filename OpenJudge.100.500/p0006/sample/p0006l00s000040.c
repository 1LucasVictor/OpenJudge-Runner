#include <stdio.h>

double kill(int x);

double debt(int n){

  int i = 0;
  double D = 100000;

  for(i=0;i<n;i++){
    D = D * 1.05;

    D = kill(D);

  }

  return D;

}

double kill(int x){

  if(x % 1000 != 0){
    x = x + 1000 - (x % 1000);
  }

  return x;
}

int main(){

  int n;

  scanf("%d", &n);

  printf("%d\n", (int)debt(n));

  return 0;

}
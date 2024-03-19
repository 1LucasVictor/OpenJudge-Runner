#include<stdio.h>


int main() {
  int n;
  int count = 0;
  scanf("%d",&n);

  while(n - 500 >= 0) {
    if(n - 500 >= 0) {
      n = n - 500;
      count += 1000;
    }
  }

  while(n - 5 >= 0) {
    if(n - 5 >=0) {
      n = n-5;
      count += 5;
    }
  }

  printf("%d",count);

  return 0;
}

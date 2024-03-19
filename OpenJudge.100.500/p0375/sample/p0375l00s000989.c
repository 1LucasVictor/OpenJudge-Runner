#include<stdio.h>

void call(int);

int main(){
  int n;
  scanf("%d", &n);

  call(n);
  return 0;
}

void call(int n){
  int i;
  int x;

  for(i = 1; i <= n; i++){
    x = i;
    if(x % 3 == 0){
      printf(" %d", i);
    }
    else {
      while(1){
	if(x % 10 == 3){
	  printf(" %d", i);
	}
	if(!(x /= 10)) break;
      }
    }
  }

  printf("\n");
}


#include <stdio.h>
#define N 10000

int main(){
  
  int n, i, j;
  int a[N];
  int sum, count = 0;

  scanf("%d",&n);
  
  for(i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }

  for(i = 0; i < n; i++){
    sum = 2;

    for(j = a[i] / 2; j > 1; j--){

      if(a[i] % j == 0){
	sum++;
	break;
      }

    }  

    if(sum == 2) count++;

  }

  printf("%d\n", count);

  return 0;
}
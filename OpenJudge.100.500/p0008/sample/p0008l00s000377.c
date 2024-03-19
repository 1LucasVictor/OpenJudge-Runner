#include <stdio.h>

int main(void){
  int i, j, k = 3, n, s, sosu[78500];
  int max, min, mid;

  sosu[0] = 1;
  sosu[1] = 2;
  sosu[2] = 3;
  for(i = 5; i <= 999999; i += 2){
    s = 0;
    for(j = 2; sosu[j] * sosu[j] <= i; j++){
      if(i % sosu[j] == 0){
	s++;
	break;
      }
    }
    if(s == 0){
      sosu[k++] = i;
    }
  }
  k--;
  
  while(scanf("%d", &n) != EOF){
    min = 0;
    max = k;
    mid = (min + max) / 2;
    while(min+1 != max){
      if(sosu[mid] < n){
	min = mid;
      }else if(sosu[mid] > n){
	max = mid;
      }else{
	break;
      }
      mid = (min + max) / 2;
    }
    printf("%d\n", mid);
  }
  return 0;
}
#include <stdio.h>
#include <math.h>

int main(void){
  int i, j, k = 3, n, x, s, sosu[1231], count = 0;

  sosu[0] = 1;
  sosu[1] = 2;
  sosu[2] = 3;
  for(i = 5; i <= 10007; i += 2){
    s = 0;
    for(j = 2; sosu[j] <= sqrt((double)i); j++){
      if(i % sosu[j] == 0){
	s++;
	break;
      }
    }
    if(s == 0){
      sosu[k++] = i;
    }
  }

  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%d", &x);
    s = 0;
    for(j = 1; sosu[j] <= sqrt((double)x); j++){
      if(x % sosu[j] == 0){
	s++;
	break;
      }
    }
    if(s == 0){
      count++;
    }
  }
  printf("%d\n", count);
  return 0;
}
#include <stdio.h>

int main(){
  int n;
  long int d;
  scanf("%d %ld", &n, &d);
  
  long int x, y;
  int count = 0;
  for (int i=0; i<n; i++){
    scanf("%ld %ld", &x, &y);
    if (x*x+y*y <= d*d){
      count++;
    }
  }
  
  printf("%d\n", count);

  return 0;
}
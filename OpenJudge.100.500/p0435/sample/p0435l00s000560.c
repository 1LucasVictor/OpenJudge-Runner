#include <stdio.h>

int main(){
  int n;
  int d;
  scanf("%d %d", &n, &d);
  
  int x, y;
  int count = 0;
  for (int i=0; i<n; i++){
    scanf("%d %d", &x, &y);
    if (x*x+y*y <= d*d){
      count++;
    }
  }
  
  printf("%d", count);

  return 0;
}

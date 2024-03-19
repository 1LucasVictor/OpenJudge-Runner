#include<stdio.h>
 
int main() {
  int x, y;
  
  scanf("%d %d", &x, &y);
  
  for (int i = 0; i <= x; i++) {                                                                    
    int j = x - i;
    if (2 * i + 4 * j == y) {
      printf("%s", "Yes\n");
      return 0;
    }
  }
  
  printf("%s", "No\n");
  return 0;
}
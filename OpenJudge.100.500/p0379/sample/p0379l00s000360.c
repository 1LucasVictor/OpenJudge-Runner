#include <stdio.h>

int main() {

  int array[100][100] = {0};
  int vector[100] = {0};
  int product[100] = {0};
  int i = 0, j = 0;
  int a, b;
  char c;

  scanf("%d %d", &a, &b);

  while(j < b) {
    scanf("%d%c", &array[i][j], &c);
    j++;
    if(c == '\n') {
      i++;
      j = 0;
      if(i == a)
	break;
    }
  }

  i = 0;
  while(i < b) {
    scanf("%d", &vector[i]);
    i++;
  }

  for(i = 0; i < a; i++)
    for(j = 0; j < b; j++)
      product[i] += array[i][j] * vector[j];

  for(i = 0; i < a; i++)
    printf("%d\n", product[i]);
  
  return 0;
}
  
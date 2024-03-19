#include <stdio.h>
 
int main()
{
  int i, sum;
  char x[1001];
 
  while (1) {
    scanf("%s", x);
    if (x[0] == '0' && x[1] == '\0') break;
    for (i = 0, sum = 0; x[i] != '\0'; i++) sum += x[i] - '0';
    printf("%d\n", sum);
  }
 
  return 0;
}


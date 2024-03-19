#include <stdio.h>

int main(void)
{
  /*
    int n;
  int *a;

  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%d", a++);

  for (int i = 0; i < n; i++)
    a--;

  for (int i = 0; i < n; i++) {
    if (*a++ % 2 == 0) {
      if (*a % 3 != 0 && *a % 5 != 0)
	printf("DENIED\n"); break;
    }
  }
  printf("APPROVED\n");

  return 0;
  */

  
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  for (int i = 0; i < n; i++) {
    if (a[i] % 2 == 0) {
      if (a[i]%3 != 0 && a[i]%5 != 0) {
	printf("DENIED\n"); break;
      }
    }
      if (i == n-1) 
	printf("APPROVED\n");
  }


  return 0;
}

#include<stdio.h> 

int main(void)
{
  int n;
  int counter = 0;
  scanf("%d", &n);
  int num[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &num[i]);
    if ( num[i] % 2 == 0 ) {
      if ( num[i] % 3 == 0 || num[i] % 5 == 0 ) {
        counter++;
      }
    } else {
      counter++;
    }
  }
  if ( counter == n ) {
    printf("APPROVED");
  } else {
    printf("DENIED");
  }
  
}




#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void)
{
  int ar[200000];
  int len;
  scanf("%d", &len);
  for (int i = 0; i < len; i++){
    scanf("%d", &(ar[i]));
  }
  for (int j = 0; j <= len - 2; j++){
    for (int l = j + 1; l <= len - 1; l++){
      if (ar[j] == ar[l]){
        puts("NO");
        exit(0);
      }
    }
  }
  puts("YES");
  return 0;
}

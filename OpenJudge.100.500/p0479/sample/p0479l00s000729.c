#include <stdio.h>
#define N 200000
int main(void) {
  int num, i;
  int men[N]={0};
  scanf("%d", &num);
  for ( i = 0; i < num-1; i++)
  {
    int temp;
    scanf("%d", &temp);
    men[temp-1]++;
  }
  for( i = 0; i < num; i++){
    printf("%d\n", men[i]);
  }
  return 0;
}

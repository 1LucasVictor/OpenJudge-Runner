#include <stdio.h>
int main() {
  int a[6];
  int k;
  for (int i = 0; i < 5; i++) {
    scanf("%d",&a[i]);
  }
  scanf("%d",&k);
  if (k<a[4]-a[0]) {
    printf("%s\n",":(" );
    return 0;
  }
  printf("%s\n","Yay!");
  return 0;
}

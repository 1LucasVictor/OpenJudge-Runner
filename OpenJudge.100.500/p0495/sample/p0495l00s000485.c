#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {
  char a[4], i, ans = 0;
  scanf("%s ", &a);
  if(a[0] == 'A') {
    ans++;
  }
  if(a[1] == 'A') {
    ans++;
  }
  if(a[2] == 'A') {
    ans++;
  }
  if(ans == 0 || ans == 3) {
    printf("No");
  } else {
    printf("Yes");
  }
  return 0;
}
#include <stdio.h>
#include <string.h>

int main(void){
  int h, n;
  scanf("%d %d\n",&h ,&n);

  int a[n];
  for (int i = 0; i < n; i++) {
    scanf("%d\n", &a[i]);
  }

  int count=0;
  while(count < n){
    h -= a[count];
    count++;
  }
  if(h > 0)
    printf("No\n");
  else
    printf("Yes\n");

  return(0);
}

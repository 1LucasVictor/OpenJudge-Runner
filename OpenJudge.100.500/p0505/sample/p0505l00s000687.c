#include<stdio.h> 

int main(void)
{
  int h,n;
  int sum = 0;
  scanf("%d %d",&h,&n);
  int s[n];
  for (int i=0; i < n; i++) {
    scanf("%d", &s[i]);
    sum += s[i];
  }
  if (sum >= h) {
    printf("Yes");
  } else {
    printf("No");
  }
}

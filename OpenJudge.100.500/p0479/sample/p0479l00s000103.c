#include <stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  int a[n+1];
  int c[n+1];

  a[1]=0; c[1]=0;
  for(int i=2;i<n+1;i++){ scanf("%d", &a[i]); c[i]=0; }

  for(int i=1;i<n+1;i++) c[a[i]]++;
  
  for(int i=1;i<n+1;i++) printf("%d\n", c[i]);

  return 0;
}

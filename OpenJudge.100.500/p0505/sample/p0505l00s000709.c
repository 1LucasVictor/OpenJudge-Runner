#include <stdio.h>

int main(){
  int h, n, i, j;
  int a[200001];
  
  scanf("%d %d", &h, &n);
  for(i=0;i<n;i++){
    scanf("%d", &a[i]);
    h -= a[i];
  }
  
  if(h <= 0) printf("Yes");
  else printf("No");
  
  return 0;
}
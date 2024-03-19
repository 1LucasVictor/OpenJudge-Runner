#include<stdio.h>
int main(void){
  int n,i,j, a[200010], b[200010];
  scanf("%d", &n);
  for(i=2;i<n+1;i++){
    scanf("%d", &a[i]);
  }
  for(i=2;i<n+1;i++){
    b[a[i]]++;
  }
  for(i=1;i<n+1;i++){
    printf("%d\n", b[i]);
  }
  return 0;
}

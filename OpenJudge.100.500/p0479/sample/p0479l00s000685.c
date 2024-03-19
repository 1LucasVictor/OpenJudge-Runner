#include<stdio.h>
int main(void){
  int n,i,j,k,a[200010], b[200010];
  scanf("%d", &n);
  for(i=2;i<n+1;i++){
    scanf("%d", &a[i]);
    b[a[i]]++;
  }
  for(j=1;j<n+1;j++){
    printf("%d\n", b[j]);
  }
  return 0;
}

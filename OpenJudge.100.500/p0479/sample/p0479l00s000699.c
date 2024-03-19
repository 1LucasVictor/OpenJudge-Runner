#include<stdio.h>

int main() {
  int n,i;
  scanf("%d", &n);
  int a[n],count[n];
  for(i = 0; i<n; i++){
    count[i] = 0;
  }
  
  for (i = 1; i < n; i++) {
    scanf("%d", &a[i]);
    count[a[i]-1]++;
  }
  
  for(i = 0;i<n;i++){ 
    printf("%d\n",count[i]);
  }
}
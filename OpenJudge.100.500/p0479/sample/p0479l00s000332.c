#include <stdio.h>
 
int main(){
  int n, t;
  scanf("%d", &n);
  int a[2000000]={0};
  for(int i=0; i<n-1; i++){
    scanf("%d", &t);
    a[t-1]++;
  }
  for(int i=0; i<n; i++) printf("%d\n", a[i]);
}
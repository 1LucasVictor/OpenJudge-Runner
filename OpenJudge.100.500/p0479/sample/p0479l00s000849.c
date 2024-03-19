#include<stdio.h>

int main(){

  int n;
  int a;
  int employee[200001] = {0};

  scanf("%d", &n);
  for(int i=1;i<n;i++){
    scanf("%d", &a);
    employee[a]++;
  }
  for(int i=1;i<=n;i++){
    printf("%d\n", employee[i]);
  }
  return 0;
}
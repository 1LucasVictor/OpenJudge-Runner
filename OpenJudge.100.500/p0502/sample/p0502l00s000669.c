#include<stdio.h>
int main(void)
{
  int n,i,c = 1;
  scanf("%d", &n);
  int a[n];
  for(i = 0; i < n ; i++){
    scanf("%d", &a[i]);
  }
  for(i = 0; i < n ; i++){
    if(a[i] % 2 == 0){
      if(a[i] % 3 == 0 || a[i] % 5 == 0)
        c = 1;
      if(a[i] % 3 != 0 && a[i] % 5 != 0)
        c = 0;
    }
  }
  if(c == 1)
    printf("APPROVED\n");
  else if(c == 0)
    printf("DENIED\n");
  
  return 0;
}
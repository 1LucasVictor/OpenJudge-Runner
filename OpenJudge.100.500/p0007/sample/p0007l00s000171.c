#include <stdio.h>

int combRnums(int n, int r, int *ans);

int main()
{
  int n, ans;
  while(scanf("%d", &n) != EOF){
    ans=0;
    if(n>0 && n<=36) combRnums(n, 4, &ans);
    printf("%d\n", ans);
  }
  return(0);
}

int combRnums(int n, int r, int *ans)
{
  if(n==0){
    (*ans)++;
    return 1;
  }else if(r==0) return 0;
  
  int i, ret;
  for(i=0; i<10; i++){
    ret = combRnums(n-i, r-1, ans);
    if(ret==1) return 0;
  }
  return 0;
}
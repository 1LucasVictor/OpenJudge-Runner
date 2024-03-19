#include<stdio.h>
int main()
{
  int ans=0;
  int a, b, i=1;
  int c, n;
  scanf("%d %d %d", &a, &b, &c);
  if(a>c){
    printf("0");
    return 0;
  }
  n=c+2;
  for(;;){
    if(a*i<n){
      ans=b+ans;
      i++;
    }else{
      printf("%d", ans);
      break;
    }
  }
  return 0;
}

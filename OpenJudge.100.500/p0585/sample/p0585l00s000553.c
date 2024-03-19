#include<stdio.h>
int main()
{
  int ans=0, a, b, i=1, c, n;
  scanf("%d %d %d", &a, &b, &c);
  if(a>c){
    printf("0");
    return 0;
  }else if(a==c){
    printf("%d", b);
  }else{}
  n=c+2;
  for(;;){
    if(a*i<n){
      ans+=b;
      i++;
    }else{
      printf("%d", ans);
      return 0;
    }
  }
}

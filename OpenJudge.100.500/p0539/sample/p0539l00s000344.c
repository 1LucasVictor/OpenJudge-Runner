#include<stdio.h>
int main(void)
{
  int a,t=0;
  scanf("%d",&a);
  for(int i=1;i<=9;i++){
    for(int j=1;j<=9;j++){
      if(a == (i*j))
        t = 1;
    }
  }
  if(t == 1) printf("Yes");
  else printf("No");
  return 0;
}

#include<stdio.h>
 
int main(void)
{
  int n;
  scanf("%d",&n);
  for(int i=1;i<=9;i++)
    for(int j=1;j<=9;j++)
      if(n==i*j){
        printf("Yes");
        return 0;
      }
  printf("No");
  return 0;
}
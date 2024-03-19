#include <stdio.h>
int main()
{
  int n,i;
  int a=0;
  scanf("%d",&n);
 
  for(i=0;i<3;i++){
    if(n%10==7){
      a=1;
    }
    n=n/10;
  }
  if(a==1)
    printf("Yes");
  else 
    printf("No");
  return 0;
}
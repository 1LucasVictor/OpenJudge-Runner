/* abc_170_a */

#include<stdio.h>

int main()
{
  int X,Y;
  int i;
  int a;
  a=0;
  scanf("%d",&X);
  scanf("%d",&Y);
  for(i=0;i<=X;i++){
    if((2*i+4*(X-i))==Y){
      a=1;
      break;
    }
  }
  if(a==1){
    printf("Yes\n");
  } else if(a==0){
    printf("No\n");
  }
  return 0;
}

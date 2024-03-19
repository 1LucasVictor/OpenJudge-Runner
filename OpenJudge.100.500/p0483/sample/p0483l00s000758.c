#include <stdio.h>
int main()
{
  int a,b;
  int flag=0;
  scanf("%d",&a);
 
  for(b=0;b<3;b++){
    if(a%10==7){
      flag=1;
    }
    a=a/10;
  }
  if(flag==1)
    printf("Yes");
  else 
    printf("No");
  return 0;
}
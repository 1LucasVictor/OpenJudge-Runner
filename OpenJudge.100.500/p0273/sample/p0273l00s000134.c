#include<stdio.h>
int main(){
  int a=0;

  scanf("%d",&a);
  if(a == 0)    printf("%d\n",1);
  
else if(a == 1)    printf("%d\n",1);
 else printf("%d\n",a-1 + a-2);
  
  return 0;
}
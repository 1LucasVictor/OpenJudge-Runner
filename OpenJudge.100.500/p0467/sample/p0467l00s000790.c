#include<stdio.h>
 
int main(void)
{
  int a,b,c,d;
  scanf("%d %d %d %d",&a,&b,&c,&d);
  
  if(a>=d){
    printf("%d\n",d);
  }
  else if((a+b) >= d){
    printf("%d\n",a);
  }
  else{
    printf("%d\n",a-(d-(a+b)));
  }
  return 0;
}
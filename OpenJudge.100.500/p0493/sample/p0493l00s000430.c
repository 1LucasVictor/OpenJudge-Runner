#include <stdio.h>

int main(void)
{
    
    int x,a=0,b=0,c=0,y=0;
      
    scanf("%d",&x);
  
    a=x/500;  b=x%500;
    c=b/5;    
  
    y=(a*1000)+(c*5);
  
    printf("%d",y);
  
    return 0;
}  
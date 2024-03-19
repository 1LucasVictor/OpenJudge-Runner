#include <stdio.h>
int main(void){
    int d=0,n=0;
    int i;
    int a=1,b=0;
  
    scanf("%d %d",&d,&n);
    
    for(i=0;i<d;i++)
    a = 100*(i+1);
    
    b = a*n;
    printf("%d",b);
      
}
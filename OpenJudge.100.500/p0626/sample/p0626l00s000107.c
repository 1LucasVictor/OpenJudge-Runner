#include <stdio.h>
int main(void){
    int d=0,n=0;
    int i,a=1;
    int b=0;
  
    scanf("%d %d",&d,&n);
    
    for(i=0; i<d; i++)
    a = a*100;
    
    b = a*n;
    if(n==100)
    b = b + 100;
    
    printf("%d\n",b);
      
}
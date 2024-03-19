#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int a,b,c,i,d=0;
    
    scanf("%d%d%d",&a,&b,&c);
    
    for(i=0;i<b-a+1;i++){ 
    
    if (c%(a+i)==0)
    d++;
}
  
  printf("%d\n",d);
  
  return(0);
  
}

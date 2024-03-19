#include<stdio.h>
int main(void)
{
    int A,B,C;
    int S1;
  
    scanf("%d%d%d",&A,&B,&C);
    S1=A-B;
    if(S1<=C) printf("%d\n",C-S1);
    else printf("0\n");
  
    return 0;
}
  
    

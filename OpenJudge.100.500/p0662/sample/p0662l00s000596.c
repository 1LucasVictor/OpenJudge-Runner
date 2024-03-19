#include <stdio.h>

int main()
{
    int A,B,C,D,i,j;
    scanf("%d%d%d%d",&A,&B,&C,&D);
    
    if(A>C)
    i=A;
    else i=C;
    if(B>D)
    j=D;
    else j=B;
    
    if(j-i<0)
    printf("0");
    else
    printf("%d",(j-i));
    
    return 0;
}

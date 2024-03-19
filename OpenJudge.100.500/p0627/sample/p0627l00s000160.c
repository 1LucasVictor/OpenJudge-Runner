#include <stdio.h>

int main()
{
    int A,B;
    int c;
    scanf("%d %d",&A,&B);
    if(A+B>=A-B){
        c=A+B;
    }else{
        c=A-B;
    }
    if(A*B>c){
        c=A*B;
    }
    
    printf("%d\n",c);

    
}
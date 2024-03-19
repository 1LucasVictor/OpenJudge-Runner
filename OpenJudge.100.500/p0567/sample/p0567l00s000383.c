#include <stdio.h>
int main(void)
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    if(C >= A-B){
        printf("%d",C-A+B);
    }else{
        printf("%d",0);
    }
}
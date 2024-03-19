#include <stdio.h>

int main(void)
{
    int A,B,C; 

    scanf("%d %d %d",&A,&B,&C);

    if(A-B > C){
        printf("0\n");
    } else {
        printf("%d\n",C-(A-B));
    }

    return 0;
}
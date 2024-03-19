#include <stdio.h>
int main()
{
    int A , B,  multiply ;
    scanf("%d %d",&A,&B);
    multiply = A*B ;
    if (1<=A && A<=9 && 1<=B && B<=9){
        printf("%d\n",multiply);
    }
    else {
        printf("-1\n");
    }
    return 0;
}


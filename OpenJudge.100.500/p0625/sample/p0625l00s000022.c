#include <stdio.h>
int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    if(A < 9 && A >= 0 && B >= 0 && B < 9){
        printf("Yay!\n");
    }else{
        printf(":(");
    }


    return 0;
}
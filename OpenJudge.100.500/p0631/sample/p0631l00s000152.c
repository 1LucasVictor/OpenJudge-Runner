#include<stdio.h>
int main()
{
    int A,B,X;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&X);
    if((X>A)&&((A+B)>X)){
            printf("YES\n");


}    else{
        printf("NO\n");
    }
    return 0;
}


#include<stdio.h>
int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    if(A+B>A-B){
        if(A+B>A*B){

            A=A+B;
        printf("%d",A);

        }

    }
    else if(A-B>A+B){
        if(A-B>A*B){
                 A=A-B;
        printf("%d",A);

        }

    }
    else if(A*B>A+B){
        if(A*B>A-B){
                A=A*B;
            printf("%d",A);
        }
    }
    else {
        printf("0");
    }
    return 0;
}

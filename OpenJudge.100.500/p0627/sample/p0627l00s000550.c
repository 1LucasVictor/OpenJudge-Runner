#include<stdio.h>
int main()
{

    int A,B;
    scanf("%d",&A);
    scanf("%d",&B);



    if((A+B)>(A-B)){
        if((A+B)>(A*B)){
            printf("%d\n",(A+B));
        }
    }
    else if((A-B)>(A*B)){
        printf("%d\n",(A-B));

    }
    else{
        printf("%d\n",(A*B));

    }
    return 0;
}

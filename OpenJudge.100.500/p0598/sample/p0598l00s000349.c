#include<stdio.h>

int main()
{
    int A,B;
    scanf("%d",&A);
    scanf("%d",&B);

    if(B%A==0){
        printf("%d",A+B);
    }else {
        printf("%d",B-A);
    }

}
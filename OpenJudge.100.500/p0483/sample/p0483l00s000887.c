#include<stdio.h>

int main()

{
    int N,i,remain;

    scanf("%d", &N);

    for(i=0; i<3; i++){

        remain = N%10;
        N = N/10;

        if(remain == 7){
            printf("Yes\n");
            break;
        }

    }

    if(remain != 7){
        printf("No\n");
    }

    return 0;
}

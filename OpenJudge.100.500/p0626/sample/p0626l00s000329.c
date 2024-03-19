#include<stdio.h>

int main()

{
    int D,N;

    scanf("%d %d", &D, &N);

    if(D==0 && N<100){
        printf("%d\n", N);
    }
    else if(D==0 && N==100){
        printf("101\n");
    }
    else if(D==1 && N<100){
        printf("%d\n", (N*100));
    }
    else if(D==1 && N==100){
        printf("%d\n", 101*100);
    }
    else if(D==2 && N<100){
        printf("%d\n", (N*10000));
    }
    else if(D==2 && N==100){
        printf("%d\n", 101*10000);
    }

    return 0;
}

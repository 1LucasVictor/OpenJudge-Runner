#include<stdio.h>
//#include<>

int main(void){
    int A, B, T;

    scanf("%d %d %d", &A, &B, &T);
    double time=1;
    double i=2;
    int bisnum=0;
    /*if(A<T){
        while(time<T+0.5){
            time = A*i;
            bisnum = bisnum + B;
            i++;
        }
        printf("%d\n", bisnum);
    }else{
       printf("0\n");
    } */

    while(time<T+0.5){
        if((int)time%A == 0){
            bisnum = bisnum + B;

        }
        time++;
    }
    printf("%d\n", bisnum);
    return 0;
}
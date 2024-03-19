#include<stdio.h>
#define N 60
#define M 3600

int main(void){
    int a, h=0, m=0, s=0;
    scanf("%d", &a);
    if (a > M){
        int pre1=0,pre2=0; 
        h = a / M;
        pre1 = a % M;
        if (pre1 < 60){
            printf("%d:%d:%d\n", h, pre1, 0);
        }
        else {
            m = pre1 / N;
            s = pre1 % N;
            printf("%d:%d:%d\n", h, m, s);
        }

    }
    else if (a >= 360){
        m = a / N;
        s = a % N;
        printf("%d:%d\n", m, s);
    }
    else{
        printf("%d\n", a);
    }
    return 0;
}

#include <stdio.h>

int main(void)
{
    int a, b, c, d, e;
    int k;

    int flag;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    scanf("%d", &k);

    flag = 0;

    if(b-a > k){
        flag = 1;
    }
    if(c-a > k){
        flag = 1;
    }
    if(d-a > k){
        flag = 1;
    }
    if(e-a > k){
        flag = 1;
    }

    if(c-b > k){
        flag = 1;
    }
    if(d-b > k){
        flag = 1;
    }
    if(e-b > k){
        flag = 1;
    }

    if(d-c > k){
        flag = 1;
    }
    if(e-c > k){
        flag = 1;
    }

    if(e-d > k){
        flag = 1;
    }

    if(flag == 0){
        printf("Yay!");
    }else{
        printf(":(");
    }

    return 0;
}
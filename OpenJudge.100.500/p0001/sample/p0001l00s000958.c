#include<stdio.h>
 
int main(void){
    int a,b,sum;

    while(scanf("%d %d", &a, &b) != -1){
        sum = a+b;
        int i = 1;

        while(sum/10 != 0){
            sum = sum/10;
            i++;
        }
            printf("%d\n",i);
    }
    return 0;
}
#include <stdio.h>

int main(void){
    long long int a = 0,b = 0;
    scanf("%d %d",&a,&b);
    long long int tmp = 0;
    for(long long int i = 1;i <= b;i += 1){
        tmp += a;
    }
    for(long long int i = 0;i < 5000 * 10001;i += 1){
        if(tmp == i * 2){
            printf("Even\n");
            return 0;
        }
    }
    printf("Odd\n");
    return 0;
}
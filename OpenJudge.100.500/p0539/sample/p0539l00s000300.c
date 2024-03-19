#include<stdio.h>

int main(void){
    int kuku[] = {1,2,3,4,5,6,7,8,9,10,12,14,16,18,15,21,24,27,20,28,32,36,25,30,35,40,45,36,42,48,54,49,56,63,64,72,81};
    int n;
    int *iter;
    int kukuSize = sizeof(kuku)/sizeof(kuku[0]);
    scanf("%d",&n);
    for(iter = kuku; iter != &kuku[kukuSize];iter++){
        if(n == *iter){
            printf("Yes");
            return 0;
        }
    }
    printf("No");
    return 0;
}
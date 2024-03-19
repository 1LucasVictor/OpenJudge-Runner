#include <stdio.h>

void sort_num(int a, int b, int c){
    int num[3] = {a, b, c};
    int tmp = 0;
    int i = 0;
    for(i = 0; i < 2; i++){
        if (num[i] > num[i + 1]){
            tmp = num[i];
            num[i] = num[i + 1];
            num[i + 1] = tmp;
        } 
    }
    if (num[0] > num[1]){
        tmp = num[0];
        num[0] = num[1];
        num[1] = tmp;
    }     


    printf("%d %d %d\n", num[0], num[1], num[2]);
}

int main(void){
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);
    sort_num(a, b, c);

    return 0;
}


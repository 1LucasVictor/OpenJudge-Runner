#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int descending_compare(const void *a, const void *b){
    return *(int*)b - *(int*)a;
}

int ascending_compare(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}


int main(void){
    char input[4];
    int i;
    int cnt = 0;
    scanf("%s", input);

    for (i = 0; i<3; i++){
        if (input[i] == '1'){
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}
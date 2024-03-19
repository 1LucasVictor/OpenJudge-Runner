#include <stdio.h>

int main(){
    int s, i=0, j, k;
    scanf("%d", &s);
    if (s % 10 != 0){
        i++;
    }
    k = (s - s%10)/10;
    if (k % 10 != 0){
        i++;
    }
    j = (k - k%10)/10;
    if (j == 1){
        i++;
    }
    printf("%d\n", i);
    return 0;
}
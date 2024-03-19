#include <stdio.h>

int main(){
    int s;
    int t=0;
    scanf("%d", &s);

    if(s >= 100){
        t++;
        s = s - 100;
    }
    if(s >= 10){
        t++;
        s = s - 10;
    }
    if (s >= 1){
        t++;
    }
    printf("%d", t);
    return 0;
}
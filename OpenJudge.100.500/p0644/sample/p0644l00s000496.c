#include<stdio.h>
int main(void){
    int s, cnt;
    cnt = 0;
    scanf("%d", &s);
    cnt = cnt + (s % 10);
    s = s / 10;
    cnt = cnt + (s % 10);
    s = s / 10;
    cnt = cnt + (s % 10); 
    printf("%d\n", cnt);
    return 0;
}

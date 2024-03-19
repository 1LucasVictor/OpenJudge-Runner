#include<stdio.h>

int main(void){
    int c0 = 0,c1 = 0;
    char buf[100001];
    scanf("%s",buf);
    while(buf[c0+c1])if(buf[c0+c1] - '0')c1++;else c0++;
    printf("%d",(c0<c1?c0 * 2:c1 * 2));
    return 0;
}
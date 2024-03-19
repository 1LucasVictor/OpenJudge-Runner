/*
 * FileName:     B
 * CreatedDate:  2020-03-28 21:03:59 +0900
 * LastModified: 2020-03-28 21:09:37 +0900
 */

#include <stdio.h>

int main(void){
    unsigned long int X;
    scanf("%ld",&X);
    int count=0;
    count+=(X/500)*1000;
    int tugi = X-X/500*500;
    count+=(tugi/5)*5;
    printf("%d\n",count);
    return 0;
}

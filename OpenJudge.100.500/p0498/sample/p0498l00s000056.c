/*
 * FileName:     A
 * CreatedDate:  2020-03-01 21:01:07 +0900
 * LastModified: 2020-03-01 21:04:20 +0900
 */

#include <stdio.h>

int main(void){
    int N;
    scanf("%d",&N);
    if(N%2){
        printf("%d\n",(int)N/2+1);
    }
    else{
        printf("%d\n",(int)N/2);
    }
    return 0;
}

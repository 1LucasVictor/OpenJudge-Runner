#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    long long int a;
    double b;
    int bint;
    int A[20];
    int B[20];
    int ans_1[20];
    int ans_10[20];
    int ans_100[20];
    int ans[20];
    int qty;
    int i,j;
    int acnt, bcnt;
    int tmp=0;
    scanf("%ld", &a);
    scanf("%lf", &b);

    for(i=0; i<20; i++){
        A[i]=0;
        B[i]=0;
        ans_1[i]=0;
        ans_10[i]=0;
        ans_100[i]=0;
        ans[i]=0;
    }
    for(i=0; i<20; i++){
        A[i]= a % 10;
        a = a / 10;
        if(a==0) break;
    }
    acnt = i+1;
    b = b * 100;
    bint = (int)b;
    for(i=0; i<4; i++){
        B[i] = bint % 10;
        bint = bint / 10;
        if(bint==0) break;
    }

    tmp = 0;
    for(i=0; i<acnt; i++){
        qty = B[0]*A[i] + tmp;
        tmp = 0;
        ans_1[i] = qty % 10;
        tmp = qty / 10;
    }
    if(tmp!=0){
        ans_1[i+1] = tmp;
        tmp=0;
    }
    ans_10[0] = 0;
    for(i=0; i<acnt; i++){
        qty = B[1]*A[i] + tmp;
        tmp = 0;
        ans_10[i+1] = qty % 10;
        tmp = qty / 10;
    }
    if(tmp!=0){
        ans_10[i+2] = tmp;
        tmp=0;
    }
    ans_100[0] = 0;
    ans_100[1] = 0;
    for(i=0; i<acnt; i++){
        qty = B[2]*A[i] + tmp;
        tmp = 0;
        ans_100[i+2] = qty % 10;
        tmp = qty / 10;
    }
    if(tmp!=0){
        ans_100[i+3] = tmp;
        tmp=0;
    }

    for(i=0;i<(acnt+2);i++){
        qty = ans_1[i] + ans_10[i] + ans_100[i] + tmp;
        tmp = 0;
        ans[i] = qty % 10;
        tmp = qty / 10;
    }
    if(tmp!=0){
        ans[i+1] = tmp;
        acnt++;
        tmp=0;
    }
    for(i=(acnt+1);i>1;i--){
        printf("%d",ans[i]);
    }
    return 0;
}
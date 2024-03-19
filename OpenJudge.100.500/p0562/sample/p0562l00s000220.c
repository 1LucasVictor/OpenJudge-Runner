#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int gcd(int a,int b);
int compare(const void* a, const void* b);

int main(void){
    int A,B;
    int i = 0;
    int ret = 0;
    scanf("%d %d",&A,&B);
    while(i <= B){
        i = i + A; //1口つかってA口ふやす
        ret++;
        if(i>=B)break;
    }
    printf("%d\n",ret);    
}
int compare(const void* a, const void* b){
    return strcmp(a, b);
}
// 最大公約数
int gcd(int a,int b){
    int c;
    int tmp;
    if(b > a){  //bがaより大きい場合bとaを入れ替える
        c = a;
        a = b;
        b = c;
    }
    tmp = a % b;
    while(tmp!=0){
        a = b;
        b = tmp;
        tmp = a % b;
    }
    return b;
}

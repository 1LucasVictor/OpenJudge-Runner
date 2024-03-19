#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int gcd(int a, int b){
    int r=1;
    while(r!=0){
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
void revStr(char* str){
    int size = strlen(str);
    int i,j;
    char tmp = {0};
    for(i = 0, j = size - 1; i < size / 2; i++, j--){
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
    }return;
}


int main(){
    long long a;
    double b;
    scanf("%lld",&a);
    scanf("%lf",&b);
    long long temp=0;
    temp=(long long)(a*b);
    printf("%lld",temp);
}

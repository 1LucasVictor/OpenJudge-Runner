#include<stdio.h>

int main(){
    int a, b, k, s, s2, s3;
    scanf("%d", &k);
    scanf("%d %d", &a, &b);
    s=a%k;
    s2=k-s;
    s3=a+s2;
    if(a==b&&k==1){
        printf("OK\n");
    }
    else if(s3<=b){
        printf("OK\n");
    }
    else{
        printf("NG\n");
    }
    return 0;
}

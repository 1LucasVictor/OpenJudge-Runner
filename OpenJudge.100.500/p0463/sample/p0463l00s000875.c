#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MOD 1000000007
#define INF 2000000000
#define ull unsigned long long

int main(){
    int n;
    scanf("%d",&n);
    if (n%10==3) {
        printf("bon");
    }else if(n%10==0||n%10==1||n%10==6||n%10==8){
        printf("pon");
    }else{
        printf("hon");
    }
    return 0;
}

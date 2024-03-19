#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,m;
    int s[5];
    int c[5];
    scanf("%d %d",&n,&m);
    for(int i = 0;i < m;i++){
        scanf("%d %d",&s[i],&c[i]);
    }

    for(int i = pow(10,n - 1);i < pow(10,n);i++){
        int flag = 0;
        int a[4];
        int tmp = i;
        for(int j = 0;j < 3;j++){
            a[n - j] = tmp%10;
            tmp /= 10;
        }
        for(int j = 0;j < m;j++){
            if(c[j] != a[s[j]]) flag = 1;
        }
        if(flag == 0){
            printf("%d",i);
            return 0;
        }
    }
    if(n == 1){
        int tmp = 0;
        int flag = 0;
        int a[4];
        for(int j = 0;j < 4;j++){
            a[j] = 0;
        }
        for(int j = 0;j < m;j++){
            if(c[j] != a[s[j]]) flag = 1;
        }
        if(flag == 0){
            printf("0");
            return 0;
        }
    }
    printf("-1");
    return 0;
}

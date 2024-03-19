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

    for(int i = 0;i < 1000;i++){
        int a[3];
        int nx = i/10;
        int keta = 1;
        a[0] = i%10;
        int j = 0;
        while(nx > 0){
            keta++;
            j++;
            a[j] = nx%10;
            nx /= 10;
        }
        if(keta != n) continue;
        int flag = 0;
        for(int j = 0;j < m;j++){
            if(c[j] != a[3 - s[j]]) flag = 1;
        }
        if(flag == 0){
            printf("%d",i);
            return 0;
        }
    }
    printf("-1");
    return 0;
}

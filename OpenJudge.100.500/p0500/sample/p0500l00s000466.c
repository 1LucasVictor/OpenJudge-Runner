#include<stdio.h>
#include<stdbool.h>

int main(void){
    int n,m;
    scanf("%d %d",&n,&m);
    int s[m],c[m];
    for(int i = 0;i < m;i++)scanf("%d %d",&s[i],&c[i]);
    int max = 1;
    int tmp_num;
    bool isok;
    for(int c = 0;c < n;c++)max *= 10;
    for(int num = (max/10);num < max;num++){
        tmp_num = num;
        isok = true;
        for(int qr = 0;qr < m;qr++){
            tmp_num = num;
            for(int dig = 0;dig < n - s[qr];dig++)tmp_num /= 10;
            if(tmp_num % 10 != c[qr]){
                isok = false;
                break;
            }
        }
        if(isok){
            printf("%d",num);
            return 0;
        }
    }
    printf("%d",-1);
}
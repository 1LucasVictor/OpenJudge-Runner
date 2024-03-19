#include<stdio.h>
int MIN(int a, int b){return a>b?b:a;}

typedef long long int ll;

int main(void){
    int l,r;
    scanf("%d%d", &l,&r);

    int time;
    if(r-l > 2019){
        printf("0\n");
        return 0;
    }else{
        time = r-l;
    }

    int ans = 2019;
    for(int i=l; i<r; i++){
        for(int j=i+1; j<=r; j++){
            ans = MIN(ans, i*j%2019);
        }
    }

    printf("%d\n", ans);
    return 0;
}
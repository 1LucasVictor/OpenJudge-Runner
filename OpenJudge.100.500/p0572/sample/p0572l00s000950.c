#include<stdio.h>

int main(){
    int L, R;
    int i, j, k;
    int mod1=2200, mod2=2200;
    int tmp, tmp2;

    scanf("%d %d", &L, &R);

    if(R-L < 2019){
        tmp2 = R-L;
    }else{
        tmp2 = 2019;
    }

    for(i=L; i<=L+tmp2; i++){
        tmp = i%2019;
        if(tmp<mod2){
            if(tmp<mod1){
                mod2 = mod1;
                mod1 = tmp;
            }else{
                mod2 = tmp;
            }
        }
    }
    //printf("%d\n", i);

    printf("%d", (mod1*mod2)%2019);

    return 0;
}
#include<stdio.h>

int main(){
    int L, R;
    int i, j, k;
    int mod1=3300, mod2=3300;
    int tmp, tmp2;

    scanf("%d %d", &L, &R);

    if(R-L < 2019){
        tmp2 = R-L;
    }else{
        tmp2 = 2019;
    }

    for(i=L; i<=L+tmp2; i++){
        for(j=L+1; j<=L+tmp2; j++){
            tmp = ((i%2019) * (j%2019))%2019;
            if(tmp<mod1){
                mod1=tmp;
            }
        }        
    }
    //printf("%d\n", i);

    printf("%d", mod1);

    return 0;
}
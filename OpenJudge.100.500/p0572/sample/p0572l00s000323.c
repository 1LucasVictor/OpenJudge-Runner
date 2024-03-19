#include<stdio.h>

int main(void){

    unsigned long L,R;

    scanf("%lu %lu",&L,&R);

    if(L > 2019){
        printf("%lu",(L - 2019)*(L - 2018));
    }else if(L <= 2019 && R >= 2019){
        printf("%lu",L);
    }else{
        printf("%lu",(L*(L+1)) % 2019);
    }
    return 0;
}
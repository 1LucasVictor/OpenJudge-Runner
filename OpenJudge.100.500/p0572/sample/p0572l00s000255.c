#include<stdio.h>

int main(void){
    int l,r;
    scanf("%d %d",&l,&r);
    if(l<2019&&r<2019){
        printf("%d",l*(l+1));
    }else if(l<2019 && r>=2019){
        printf("0");
    }else{
        l=l%2019;
        r=r%2019;
        if(l>=r){
            printf("0");
        }else{
            printf("%d",l*(l+1));
        }
    }
    return 0;
}


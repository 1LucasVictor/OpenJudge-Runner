#include<stdio.h>

int main(void){
    int l,r;
    scanf("%d %d",&l,&r);
    l=l%2019;
    r=r%2019;
    if(l>=r){
        printf("0");
    }else{
        printf("%d",l*(l+1));
    }
    return 0;
}


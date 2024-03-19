#include<stdio.h>

int main(void){
    long int l,r;
    scanf("%ld%ld",&l,&r);
    if(r < 2019){
        printf("%d\n",l*(l+1)%2019);
    }else if(l <= 2019 && r >= 2019 && r <2019*2019){
        printf("0\n");
    }else if(l > 2019 && r < 2019 * 2019){
        printf("%d\n",l*(l+1) % 2019);
    }else if(l >= 2019 && l <2019*2019 && r >= 2019*2019){
        printf("0\n");
    }else if(l > 2019 *2019){
        printf("%d\n",l*(l+1)%2019);
    }

    return 0;

}
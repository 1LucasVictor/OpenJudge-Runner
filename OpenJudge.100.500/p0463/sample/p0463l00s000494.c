#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
scanf("%i",&n);

for(int i=2;i>0;i--){
    n=n%(int)(pow(10,i));
}
    if((n==2)||(n==4)||(n==5)||(n==7)||(n==9)){
        printf("hon\n");
    }
    else if((n==0)||(n==1)||(n==6)||(n==8)){
        printf("pon\n");
    }
    else{
        printf("bon\n");
    }

    return 0;
}

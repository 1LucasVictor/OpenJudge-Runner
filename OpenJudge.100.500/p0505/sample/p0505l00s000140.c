#include <stdio.h>
#include <stdlib.h>

int main()
{

    long h,n;

    scanf("%ld%ld", &h,&n);

    long i,sum=0,a;

    for(i=0;i<n;i++) {
        scanf("%ld", &a);
        sum+=a;
    }

    if(h-sum<=0) {
        printf("Yes");
    }else {
        printf("No");
    }


    return 0;
}

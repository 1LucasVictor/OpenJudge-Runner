#include <stdio.h>

main(){
    long a,b,c,d,e,f;
    long x,y;
    int tmp;


    while(scanf("%ld",&a)!=EOF){
        scanf("%ld",&b);
        scanf("%ld",&c);
        scanf("%ld",&d);
        scanf("%ld",&e);
        scanf("%ld",&f);

        x=((b*f*10000/e-c*10000)*10000LL/(b*d*10000/e-a*10000)+5)/10;
        y=((a*f*10000/d-c*10000)*10000LL/(a*e*10000/d-b*10000)+5)/10;

        if(x<0)x-=1;
        if(y<0)y-=1;
        printf("%ld.%03ld %ld.%03ld\n",x/1000,x%1000,y/1000,y%1000);
    }
    return 0;

}
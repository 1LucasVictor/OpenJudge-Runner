#include <stdio.h>
main(){
    int a,b,c,d,e;
    scanf("%d", &a);
    b=a/100;
    if(b==1){
        c=(a-100)/10;
    }else{
        c=a/10;
    }
    d=a-b*100-c*10;
    e=b+c+d;
    printf("%d\n",e);
    return 0;
}
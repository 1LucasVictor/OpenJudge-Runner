#include <stdio.h>
int main(void){
    int a;
    int b;
    scanf("%d %d",&a,&b);
    if(0<a&&a<10&&0<b&&b<10){
        int c;
        c=a*b;
        printf("%d",c);
    }
    else {
        int d=-1;
        printf("%d",d);
    }
    return 0;
}

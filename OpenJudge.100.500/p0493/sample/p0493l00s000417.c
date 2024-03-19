#include <stdio.h>
int main(){
    int x;

    do{
        scanf("%d",&x);
    }while(x<0||x>1000000000);

    int a,b,c;
    a = x/500;
    b = x - a*500;
    c = b/5;

    printf("%d", a*1000 + c*5);


    return 0;
}

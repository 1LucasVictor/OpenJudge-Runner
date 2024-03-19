#include <stdio.h>

int main(void){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int nokori=a-b;
    c-=nokori;
    if(c<0){
        c=0;
    }

    printf("%d\n",c);

    return 0;
}

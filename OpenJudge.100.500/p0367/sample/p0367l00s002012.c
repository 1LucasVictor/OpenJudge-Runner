#include <stdio.h>
int main(void){
    int a, b, c, x, i=0;
    scanf("%d %d %d", &a, &b, &c);
    for(x=a;x<=b;x++){
        if(c%x==0)i++;
        else ;
    }
    printf("%d\n",i);
    return 0;
}


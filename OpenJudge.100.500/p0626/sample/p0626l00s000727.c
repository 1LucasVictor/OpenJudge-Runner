#include <stdio.h>
int main(void){
    int d,n;
    scanf("%d %d",&d,&n);
    switch(d){
        case 0:
            printf("%d\n",n);
            break;
        case 1:
            printf("%d\n",(100*n));
            break;
        case 2:
            printf("%d\n",(10000*n));
            break;
    }
    return 0;
}
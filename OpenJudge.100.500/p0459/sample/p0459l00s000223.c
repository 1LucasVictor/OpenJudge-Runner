#include<stdio.h>

int main(void){
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    int result = 0;
    for (int i=1; i<=x; i++){
        if ( y == (i * 2 + (x-i) * 4)){
            result = 1;
            break;
        }
        if ( y == (i * 4 + (x-i) * 2)){
            result = 1;
            break;
        }
    }
    if (result) printf("Yes\n"); 
    else printf("No\n");
    return 0;
}
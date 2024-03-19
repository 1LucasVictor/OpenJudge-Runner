#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    int i,r;
    for(i=0;i<3;i++){
        r=n%10;
        n=n/10;
        if(r==7){
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n" );
    return 0;
}

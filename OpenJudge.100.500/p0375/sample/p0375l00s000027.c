#include <stdio.h>

int main(void){
    int n,x;
    int check_undone=1;
    scanf("%d",&n);
    int i=0;

    for(i=1;i<=n;i++){
        x=i;
        if(x%3==0){
            printf(" %d",i);
            check_undone=0;
        }

        while(check_undone){

            if(x/10==0){
                check_undone=0;
            }

            if(x%10==3){
                printf(" %d",i);
                check_undone=0;
            }else{
                x/=10;
            }
        }
        check_undone=1;
    }
    printf("\n");

    return 0;
}

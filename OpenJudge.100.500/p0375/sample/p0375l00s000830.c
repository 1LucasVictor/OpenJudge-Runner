#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%3==0){
            printf(" %d",i);
        }
        else if(i/10==3){
            printf(" %d",i);
        }
        else if(i%10==3){
            printf(" %d",i);
        }
    }
    printf("\n");
    return 0;
}
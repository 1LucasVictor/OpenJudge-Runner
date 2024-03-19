#include <stdio.h>
#include <stdlib.h>

int main(void){

    int i,j;
    int a,b,t;
    int bis=0;

    scanf("%d %d %d",&a,&b,&t);

    for (i=1;i<(t+1);i++){
        if (i%a==0){
            bis+=b;
        }
    }

    printf("%d",bis);
    return 0;
}

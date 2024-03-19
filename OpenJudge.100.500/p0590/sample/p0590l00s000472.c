#include "stdio.h"

int main(){
    int a[5];
    int i,j,k;
    int ret = 0;
    scanf("%d",&a[0]);
    scanf("%d",&a[1]);
    scanf("%d",&a[2]);
    scanf("%d",&a[3]);
    scanf("%d",&a[4]);
    scanf("%d",&k);
    for(i=0;i<4;i++){
        for(j=i;j<5;j++){
            if((a[j]-a[i])>k){
                ret++;
            }
        }
    }
    if( ret == 0 ){
        printf("Yay!\n");
    }else{
        printf(":(\n");
    }

    return 0;
}

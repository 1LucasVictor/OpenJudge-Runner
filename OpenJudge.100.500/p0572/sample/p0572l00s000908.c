#include <stdio.h>

int main(void){
    int r,l,i,j,min=2019,tmp;
    scanf("%d %d",&l,&r);
    for(i=l;i<r;++i){
        for(j=l+1;j<=r;j++){
            tmp = (i*j)%2019;
            if(tmp<min) min = tmp;
        }
    }
    printf("%d\n",min);
    return 0;
}

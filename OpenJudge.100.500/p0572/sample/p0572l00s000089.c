#include <stdio.h>

int main(void){
    int r,l,i,j,min=2000000000,tmp;
    scanf("%d %d",&l,&r);
    if((r-l)>=2019){
        printf("0\n");
    }else{
        for(i=l;i<r;++i){
            for(j=l+1;j<=r;++j){
                tmp = (i%2019)*(j%2019);
                if(tmp<min) min = tmp;
            }
        }
        printf("%d\n",min);
    }
    return 0;
}
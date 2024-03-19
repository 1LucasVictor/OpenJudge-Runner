#include<stdio.h>

int main(void){
    int l,r,a,b,i,j,ans,min=3000;
    scanf("%d %d",&l,&r);
    a=l;
    b=r;
    l%=2019;
    r%=2019;
    //printf("%d %d ",l,r);
    if(l>=r){
        printf("0");
    }else{
        if(a+2019<b){
            printf("0");
        }else{
            a=a%2019;
            b=b%2019;
            for(i=a;i<b;i++){
                for(j=i+1;j<b+1;j++){
                    ans=(i*j)%2019;
                    if(ans<min){
                        min=ans;
                    }
                }
            }
            printf("%d",min);
        }
    }
    return 0;
}


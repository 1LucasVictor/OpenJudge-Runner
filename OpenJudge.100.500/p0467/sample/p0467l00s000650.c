#include<stdio.h>
int main(void)
{
    int a,b,c,k;
    scanf("%d %d %d %d",&a,&b,&c,&k);
    int i=0,cnt=0,j,l,max=0,m,v;

    for(j=0;j<=a;j++){
        for(v=0;v<=b;v++){
            for(l=0;l<=c;l++){
                if(j+v+l==k){
                    if(1*j+k*0+(-1)*l>max){
                        max=1*j+k*0+(-1)*l;
                    }
                }
            }
        }
    }
    printf("%d\n",max);
    return 0;
}
#include<stdio.h>
int main(void){
    int n,x,i,j,k,c[10000]={0},u,e=0;
    while(1){
    scanf("%d %d",&n,&x);
            if(n==0&&x==0)break;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            for(k=1;k<=n;k++){
                    if(x==i+j+k&&i!=j&&j!=k&&k!=i){
                        u++;
                        }

            }
        }

    }c[e]=u/6;
    e++;

    }
    e=0;
    while(1){
            if(e>(u/6)-2)break;
    printf("%d\n",c[e]);
    e++;
    }
return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,x,exe=0;
    int i,j,m;

    while(1){

    scanf("%d %d",&n,&x);

    if(n==0&&x==0)
        exit(0);

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            for(m=1;m<=n;m++){

                if(i>j&&j>m){
                    if(i+j+m==x){
                        exe++;
                    }

                }
            }
        }
    }

    printf("%d\n",exe);
    }

    return 0;
}


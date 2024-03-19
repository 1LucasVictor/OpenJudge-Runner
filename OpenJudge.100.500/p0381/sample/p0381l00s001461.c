#include<stdio.h>
int main(void)
{
    int count=0,n,x,i=1,j=1,z=1,k=1,N[30000],X[30000];
    while(1){
        scanf("%d %d",&n,&x);
        if(n==0&&x==0)break;
        N[i]=n;
        X[i]=x;
        i++;
    }

    for(z=1;z<=N[z];z++){
        for(i=1;i<=N[z];i++){
            for(j=i+1;j<=N[z];j++){
                for(k=j+1;k<=N[z];k++){
                    if(i+j+k==X[z]){
                        count=count+1;

                    }
                }
            }
        }
        printf("%d\n",count);
        count=0;
    }



    return 0;
}
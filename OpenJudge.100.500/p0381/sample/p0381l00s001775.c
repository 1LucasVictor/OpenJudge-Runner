#include<stdio.h>
int main(void)
{
    int n,x,q=1,z,i,j,k,count=0,p=1,N[30000],X[30000];
    do{
        scanf("%d %d",&n,&x);
        if(n==0&&x==0)break;
        else{
            N[p]=n;
            X[p]=x;
        }

    }while(p++);
    for(z=1;z<=N[z];z++){
        for(i=1;i<=N[z];i++){
            for(j=1;j<=N[z];j++){
                for(k=1;k<=N[z];k++){
                    if(i!=j&&j!=k&&i!=k){
                        if(i+j+k==X[z]&&i<j&&j<k){
                            
                            count++;
                        }
                    }
                }
            }
        }
        printf("%d\n",count);
        count=0;
    }

    return 0;
}